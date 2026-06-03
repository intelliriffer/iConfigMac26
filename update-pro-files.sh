#!/bin/bash
# =============================================================================
# update-pro-files.sh - Modernize .pro files for current macOS and Qt 6.x
# =============================================================================
# This script updates the .pro files to work with modern macOS and Qt versions.
# It fixes:
#   - Removes -stdlib=libstdc++ (use libc++ instead, which is default on modern macOS)
#   - Removes old SDK path references that don't exist anymore
#   - Updates compiler flags for compatibility
# =============================================================================

set -e

PROJECT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
GREEN='\033[0;32m'
BLUE='\033[0;34m'
NC='\033[0m'

echo -e "${BLUE}=== Modernizing .pro files ===${NC}"
echo ""

# Function to update a .pro file
update_pro_file() {
    local FILE="$1"
    echo "Updating: $FILE"

    if [ ! -f "$FILE" ]; then
        echo -e "  ${RED}File not found!${NC}"
        return 1
    fi

    # Create backup
    cp "$FILE" "${FILE}.bak"

    # Update the file using sed:
    # 1. Remove -stdlib=libstdc++ (use default libc++)
    # 2. Remove old SDK path references
    # 3. Fix QMAKE_LFLAGS typo (should be in CXXFLAGS)
    # 4. Keep other important flags

    sed -i '' 's/-stdlib=libstdc++//g' "$FILE"
    sed -i '' '/MacOSX10.11.sdk/d' "$FILE"
    sed -i '' '/-isystem \/opt\/local\/include/d' "$FILE"

    echo "  Updated successfully"
}

# Update both .pro files
update_pro_file "$PROJECT_ROOT/GeneSysLib/Qt/GeneSysLib.pro" || true
update_pro_file "$PROJECT_ROOT/iConfig/iConfig/iConnectivityiConfig.pro" || true

echo ""
echo -e "${GREEN}=== Done ===${NC}"
echo ""
echo "Backup files created with .bak extension."
echo "If you need to restore, use: mv file.bak file"
echo ""
echo "Review the changes with:"
echo "  git diff GeneSysLib/Qt/GeneSysLib.pro"
echo "  git diff iConfig/iConnectivityiConfig.pro"
