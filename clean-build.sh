#!/bin/bash
# =============================================================================
# iConnectivity iConfig - Clean Build Script
# =============================================================================
# This script performs a complete clean build of the project.
# It removes all previous build artifacts and rebuilds from scratch.
#
# Usage: ./clean-build.sh [release|debug]
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

cd "$PROJECT_ROOT"

echo "=========================================="
echo -e "${BLUE}iConfig Clean Build${NC}"
echo "=========================================="
echo ""
echo "Build type: $BUILD_TYPE"
echo ""

# Clean build artifacts from previous runs
print_clean() {
	echo "Cleaning: $1"
	rm -rf "$PROJECT_ROOT/$1" 2>/dev/null || true
}

print_status() {
	if [ -t 1 ]; then
		echo -e "${BLUE}$1${NC}"
	else
		echo "$1"
	fi
}
app="iConfigMac26.app"
echo "Removing old build artifacts..."
print_clean "GeneSysLib/build-GeneSysLib-Default-release"
print_clean "GeneSysLib/build-GeneSysLib-Default-debug"
print_clean "iConfig/build/release"
print_clean "iConfig/$app"

cd "$PROJECT_ROOT/iConfig"
echo "$(pwd)/runnning make clean"
make clean
cd "$PROJECT_ROOT"

echo ""
print_status "Running clean build..."
echo ""

# Run the main build script with same parameters
cd "$PROJECT_ROOT"

./build-app.sh "$BUILD_TYPE"
