#!/bin/bash
# =============================================================================
# iConnectivity iConfig - Main Build Script
# =============================================================================
# This script compiles the iConnectivity iConfig application for macOS.
# It builds dependencies first, then the main application.
#
# Usage: ./build-app.sh [release|debug]
#        Defaults to 'release' if no argument provided
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

# Default configuration
BUILD_TYPE="${1:-release}"

if [[ "$BUILD_TYPE" != "release" && "$BUILD_TYPE" != "debug" ]]; then
    echo -e "${RED}Error: Invalid build type '$BUILD_TYPE'${NC}"
    echo "Usage: $0 [release|debug]"
    exit 1
fi

# Set Qt environment variables
export PATH="/opt/homebrew/opt/qt/bin:$PATH"
export QMAKE="/opt/homebrew/opt/qt/bin/qmake"
export LIBRARY_PATH="/opt/homebrew/lib:$LIBRARY_PATH"

cd "$PROJECT_ROOT"

echo "=========================================="
echo -e "${BLUE}iConnectivity iConfig Build${NC}"
echo "=========================================="
echo ""
echo "Build type:   $BUILD_TYPE"
echo "Architecture: $(uname -m)"
echo "Qt path:      $QMAKE"
echo ""

# Verify Qt is available
if [ ! -f "$QMAKE" ]; then
    echo -e "${RED}Error: qmake not found at $QMAKE${NC}"
    echo "Please run ./build-setup.sh first to install dependencies."
    exit 1
fi

# Verify RtMidi is present
RTMIDI_DIR="$PROJECT_ROOT/rtmidi-2.1.1"
if [ ! -d "$RTMIDI_DIR" ]; then
    echo -e "${RED}Error: RtMidi library not found at $RTMIDI_DIR${NC}"
    echo "Please run ./build-setup.sh first to install dependencies."
    exit 1
fi

# Count CPU cores for parallel build
NUM_CORES=$(sysctl -n hw.ncpu)
echo "Using $NUM_CORES CPU cores for parallel build"
echo ""

# Function to print section headers
print_section() {
    echo ""
    echo "----------------------------------------"
    echo -e "${BLUE}$1${NC}"
    echo "----------------------------------------"
}

# Build GeneSysLib first (static library dependency)
print_section "Building GeneSysLib Library"

GENESYSLIB_DIR="$PROJECT_ROOT/GeneSysLib/Qt"

if [ ! -f "$GENESYSLIB_DIR/GeneSysLib.pro" ]; then
    echo -e "${RED}Error: GeneSysLib.pro not found${NC}"
    exit 1
fi

cd "$GENESYSLIB_DIR"

# Clean any previous build artifacts (optional, can remove for faster rebuilds)
# make clean || true

# Note: This project has been modified for Qt6/Boost compatibility on modern macOS
# See memory/build-fixes-applied.md for details of all fixes applied

echo "Running qmake..."
"$QMAKE" GeneSysLib.pro "CONFIG+=$BUILD_TYPE" QMAKE_MACOSX_DEPLOYMENT_TARGET=10.15 -spec macx-clang

if [ $? -ne 0 ]; then
    echo -e "${RED}Error: qmake failed${NC}"
    exit 1
fi

echo "Compiling..."
make -j"$NUM_CORES"

if [ $? -ne 0 ]; then
    echo -e "${RED}Error: GeneSysLib build failed${NC}"
    exit 1
fi

# Verify library was created
LIB_PATH="$GENESYSLIB_DIR/build-GeneSysLib-Default-$BUILD_TYPE/libGeneSysLib.a"
if [ ! -f "$LIB_PATH" ]; then
    # Try alternate location
    LIB_PATH="$GENESYSLIB_DIR/release/libGeneSysLib.a"
    if [ ! -f "$LIB_PATH" ]; then
        echo -e "${YELLOW}Warning: Could not find built library at expected locations${NC}"
        echo "Library may be in a different build directory."
    fi
else
    print_success "Library created: $LIB_PATH"
fi

cd "$PROJECT_ROOT"

# Build main application
print_section "Building iConnectivityiConfig Application"

APP_DIR="$PROJECT_ROOT/iConfig/iConfig"

if [ ! -f "$APP_DIR/iConnectivityiConfig.pro" ]; then
    echo -e "${RED}Error: iConnectivityiConfig.pro not found${NC}"
    exit 1
fi

cd "$APP_DIR"

echo "Running qmake..."
"$QMAKE" iConnectivityiConfig.pro "CONFIG+=$BUILD_TYPE" QMAKE_MACOSX_DEPLOYMENT_TARGET=10.6 -spec macx-clang

if [ $? -ne 0 ]; then
    echo -e "${RED}Error: qmake failed${NC}"
    exit 1
fi

echo "Compiling..."
make -j"$NUM_CORES"

if [ $? -ne 0 ]; then
    echo -e "${RED}Error: iConnectivityiConfig build failed${NC}"
    exit 1
fi

# Find the built application bundle
APP_PATH=""
for path in \
    "build/release/iConnectivity\ iConfig.app" \
    "release/iConnectivity\ iConfig.app"; do

    if [ -d "$path" ]; then
        APP_PATH="$path"
        break
    fi
done

echo ""
print_section "Build Complete!"

if [ -n "$APP_PATH" ] && [ -d "$APP_PATH" ]; then
    echo -e "${GREEN}Application bundle created:${NC}"
    echo "  $PROJECT_ROOT/$APP_PATH"

    # Show app info
    if command -v mdls &> /dev/null; then
        echo ""
        echo "Bundle details:"
        mdls -name kMDItemCFBundleIdentifier "$APP_PATH" 2>/dev/null || true
        mdls -name kMDItemVersion "$APP_PATH" 2>/dev/null || true
    fi
else
    echo -e "${YELLOW}Build completed but application bundle not found at expected location${NC}"
    echo "Checking for .app bundles..."
    find . -maxdepth 2 -name "*.app" -type d 2>/dev/null || echo "No .app bundles found"
fi

echo ""
echo "=========================================="
echo -e "${GREEN}Build finished successfully!${NC}"
echo "=========================================="
echo ""
echo "To run the application:"
echo "  ./build-app.sh && open iConfig/build/release/iConnectivity\ iConfig.app"
echo ""
