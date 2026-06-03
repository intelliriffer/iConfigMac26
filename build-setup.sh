#!/bin/bash
# =============================================================================
# iConnectivity iConfig - Build Environment Setup Script
# =============================================================================
# This script prepares the build environment for compiling iConfig on macOS.
# It installs missing dependencies and configures necessary environment variables.
#
# Usage: ./build-setup.sh
# =============================================================================

set -e

# Colors for output (disabled if not a terminal)
if [ -t 1 ]; then
    RED='\033[0;31m'
    GREEN='\033[0;32m'
    YELLOW='\033[1;33m'
    BLUE='\033[0;34m'
    NC='\033[0m' # No Color
else
    RED=''
    GREEN=''
    YELLOW=''
    BLUE=''
    NC=''
fi

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$SCRIPT_DIR"

echo "=========================================="
echo "iConfig Build Environment Setup"
echo "=========================================="
echo ""

# Function to check if command exists
command_exists() {
    command -v "$1" &> /dev/null
}

# Function to print status messages
print_status() {
    echo -e "${BLUE}[INFO]${NC} $1"
}

print_success() {
    echo -e "${GREEN}[OK]${NC} $1"
}

print_warning() {
    echo -e "${YELLOW}[WARN]${NC} $1"
}

print_error() {
    echo -e "${RED}[ERROR]${NC} $1"
}

# Check for Homebrew
print_status "Checking for Homebrew..."
if ! command_exists brew; then
    print_error "Homebrew is not installed."
    print_warning "Please install Homebrew first: https://brew.sh"
    exit 1
fi
print_success "Homebrew found at $(which brew)"

# Check for Xcode CLI tools
print_status "Checking for Xcode Command Line Tools..."
if ! xcode-select -p &> /dev/null; then
    print_error "Xcode Command Line Tools are not installed."
    print_warning "Please run: xcode-select --install"
    exit 1
fi
print_success "Xcode CLI tools found at $(xcode-select -p)"

# Check macOS version and architecture
print_status "Checking system information..."
MACOS_VERSION=$(sw_vers -productVersion)
ARCH=$(uname -m)
print_success "macOS $MACOS_VERSION on $ARCH"

echo ""
echo "--- Checking Dependencies ---"
echo ""

# Check Qt installation
print_status "Checking for Qt (qmake)..."
QT_FOUND=false
QT_PATH=""

# Try common locations
for qmake_path in \
    "/opt/homebrew/opt/qt/bin/qmake" \
    "/usr/local/bin/qmake" \
    "$(brew --prefix qt)/bin/qmake" \
    "/Applications/Qt*/Qt*/bin/qmake"; do

    if [ -f "$qmake_path" ]; then
        QT_FOUND=true
        QT_PATH="$qmake_path"
        break
    fi
done

if [ "$QT_FOUND" = false ]; then
    print_warning "Qt not found. Installing via Homebrew..."

    # Check if Qt formula is already installed but not linked
    if brew list qt &> /dev/null; then
        print_status "Linking Qt..."
        brew link qt || true
    else
        print_status "Installing Qt package..."
        brew install qt
    fi

    # Re-check after installation
    QT_PATH="/opt/homebrew/opt/qt/bin/qmake"
    if [ -f "$QT_PATH" ]; then
        QT_FOUND=true
        print_success "Qt installed successfully at $QT_PATH"
    else
        # Try to find it with brew --prefix
        QT_PATH="$(brew --prefix qt)/bin/qmake"
        if [ -f "$QT_PATH" ]; then
            QT_FOUND=true
            print_success "Qt found at $QT_PATH"
        fi
    fi
else
    print_success "Qt already installed at $QT_PATH"
fi

if [ "$QT_FOUND" = false ]; then
    print_error "Failed to locate Qt/qmake after installation attempt."
    print_warning "Please ensure Homebrew is up-to-date: brew update && brew upgrade qt"
    exit 1
fi

# Get Qt version
QT_VERSION=$("$QT_PATH" --version | head -1)
print_success "$QT_VERSION"

echo ""

# Check RtMidi library
print_status "Checking for RtMidi library..."
RTMIDI_DIR="$PROJECT_ROOT/rtmidi-2.1.1"

if [ ! -d "$RTMIDI_DIR" ]; then
    print_warning "RtMidi library not found at $RTMIDI_DIR"
    print_status "Cloning RtMidi from GitHub..."

    cd "$PROJECT_ROOT"
    git clone https://github.com/thestk/rtmidi.git rtmidi-2.1.1

    if [ -d "$RTMIDI_DIR" ]; then
        print_success "RtMidi cloned successfully"

        # Check out version 2.1.1 if available, otherwise use latest
        cd "$RTMIDI_DIR"
        if git tag | grep -q "v2.1.1"; then
            git checkout v2.1.1 2>/dev/null || true
            print_status "Checked out RtMidi version 2.1.1"
        fi
        cd "$PROJECT_ROOT"
    else
        print_error "Failed to clone RtMidi library"
        exit 1
    fi
else
    print_success "RtMidi already present at $RTMIDI_DIR"
fi

echo ""

# Set environment variables
print_status "Configuring environment variables..."

cat << 'EOF'
export PATH="/opt/homebrew/opt/qt/bin:$PATH"
export QMAKE="/opt/homebrew/opt/qt/bin/qmake"
export LIBRARY_PATH="/opt/homebrew/lib:$LIBRARY_PATH"
export DYLD_LIBRARY_PATH="/opt/homebrew/lib:$DYLD_LIBRARY_PATH"

# Add to your ~/.zshrc for persistence:
echo 'export PATH="/opt/homebrew/opt/qt/bin:\$PATH"' >> ~/.zshrc
echo 'export QMAKE="/opt/homebrew/opt/qt/bin/qmake"' >> ~/.zshrc
EOF

print_success "Environment variables configured (run source ~/ .zshrc to apply)"

echo ""
echo "--- Verification ---"
echo ""

# Verify everything is set up correctly
ALL_GOOD=true

# Test qmake availability
if [ -f "$QT_PATH" ]; then
    print_success "qmake available: $($QT_PATH --version | head -1)"
else
    print_error "qmake not found at expected location"
    ALL_GOOD=false
fi

# Verify RtMidi headers exist
if [ -d "$RTMIDI_DIR/RtMidi.h" ] || [ -f "$RTMIDI_DIR/RtMidi.h" ]; then
    print_success "RtMidi header found"
else
    # Check in subdirectory
    if find "$RTMIDI_DIR" -name "RtMidi.h" | grep -q .; then
        print_success "RtMidi header found (in RtMidi directory)"
    else
        print_warning "Could not locate RtMidi.h header"
        ALL_GOOD=false
    fi
fi

echo ""

if [ "$ALL_GOOD" = true ]; then
    echo -e "${GREEN}=========================================="
    echo "Build environment is ready!"
    echo "==========================================${NC}"
    echo ""
    echo "Next steps:"
    echo "  1. Run: source ~/.zshrc  (to apply environment variables)"
    echo "  2. Build: ./build-app.sh [release|debug]"
    echo "  3. Or run clean build: ./clean-build.sh"
    echo ""
else
    echo -e "${RED}=========================================="
    echo "Build setup has issues that need attention"
    echo "==========================================${NC}"
    exit 1
fi
