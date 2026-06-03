# iConnectivity iConfig - Build Instructions for macOS (Apple Silicon)

This document provides complete instructions for building the iConnectivity iConfig application on a modern macOS system with Apple Silicon (M1/M2/M3 chips).

## Project Overview

**iConnectivity iConfig** is a Qt-based configuration utility for iConnectivity audio/MIDI interfaces. It allows users to:
- Configure MIDI port routing and filtering
- Set up audio patching and mixing
- Update device firmware
- Save/restore presets

## System Requirements

### Hardware
- Apple Silicon Mac (M1, M2, M3 series) or Intel Mac
- macOS 10.13 High Sierra or later (recommended: latest macOS)

### Software Dependencies
- **Xcode Command Line Tools** - Required for compilers and build tools
- **Homebrew** - Package manager for installing dependencies
- **Qt Framework** - Version 5.12+ or Qt 6.x (for GUI application)
- **RtMidi Library** - Cross-platform MIDI API wrapper

## Quick Start

### One-Command Setup and Build

```bash
# Navigate to project root
cd /path/to/iConfig

# Run the setup script (installs missing dependencies)
./build-setup.sh

# Build the application (release mode by default)
./build-app.sh release

# Or do a clean build from scratch:
./clean-build.sh release
```

### Manual Setup (Step-by-Step)

If you prefer to understand each step, follow these instructions:

#### 1. Install Xcode Command Line Tools

```bash
xcode-select --install
```

Accept the license agreement when prompted.

#### 2. Install Homebrew (if not already installed)

```bash
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

Add Homebrew to your PATH (follow the instructions printed after installation).

#### 3. Install Qt Framework

```bash
brew install qt
```

This will download and install Qt along with all its dependencies including qmake, the build tool used by this project.

#### 4. Clone RtMidi Library

The project requires the RtMidi MIDI library which is not included in the repository:

```bash
cd /path/to/iConfig
git clone https://github.com/thestk/rtmidi.git rtmidi-2.1.1
cd rtmidi-2.1.1
git checkout v2.1.1  # Optional: specific version
cd ..
```

#### 5. Configure Environment Variables

Add these to your `~/.zshrc` or `~/.bash_profile`:

```bash
export PATH="/opt/homebrew/opt/qt/bin:$PATH"
export QMAKE="/opt/homebrew/opt/qt/bin/qmake"
export LIBRARY_PATH="/opt/homebrew/lib:$LIBRARY_PATH"
export DYLD_LIBRARY_PATH="/opt/homebrew/lib:$DYLD_LIBRARY_PATH"
```

Then reload your shell configuration:

```bash
source ~/.zshrc  # or source ~/.bash_profile
```

## Building the Application

### Build GeneSysLib (Static Library)

The project consists of two components that must be built in order:

1. **GeneSysLib** - Core library for device communication
2. **iConnectivityiConfig** - Main application using the library

```bash
# Navigate to library directory
cd GeneSysLib/Qt

# Configure build
/opt/homebrew/bin/qmake "CONFIG=release"

# Build
make -j$(sysctl -n hw.ncpu)
```

### Build iConnectivityiConfig (Main Application)

```bash
# Navigate to application directory
cd ../iConfig/iConfig

# Configure build
/opt/homebrew/bin/qmake "CONFIG=release" QMAKE_MACOSX_DEPLOYMENT_TARGET=10.6

# Build
make -j$(sysctl -n hw.ncpu)
```

### Using Automated Scripts

The project includes automated scripts to simplify building:

#### Setup Script

```bash
./build-setup.sh
```

This script:
- Checks for and installs Qt if missing
- Clones the RtMidi library if not present
- Sets up environment variables
- Verifies everything is configured correctly

#### Build Script

```bash
./build-app.sh [release|debug]
```

Parameters:
- `release` - Optimized build (default)
- `debug` - Debug build with symbols

#### Clean Build Script

```bash
./clean-build.sh [release|debug]
```

This removes all previous build artifacts and performs a fresh build.

## Output Location

After a successful build, the application bundle will be located at:

```
iConfig/build/release/iConnectivity iConfig.app
```

To run it:

```bash
open iConfig/build/release/iConnectivity\ iConfig.app
```

Or double-click the app in Finder.

## Troubleshooting

### qmake not found

If you see errors about `qmake` not being found:

1. Ensure Qt is installed: `brew list qt`
2. Check path: `/opt/homebrew/opt/qt/bin/qmake --version`
3. Add to PATH in your shell config file

### Library linking errors

If you encounter library linking errors:

```bash
export LIBRARY_PATH="/opt/homebrew/lib:$LIBRARY_PATH"
export DYLD_LIBRARY_PATH="/opt/homebrew/lib:$DYLD_LIBRARY_PATH"
```

### RtMidi compilation errors

Ensure the RtMidi directory is in the correct location:

```bash
ls rtmidi-2.1.1/RtMidi.h  # Should exist
```

If missing, clone it again:

```bash
cd /path/to/iConfig
rm -rf rtmidi-2.1.1
git clone https://github.com/thestk/rtmidi.git rtmidi-2.1.1
```

### ARM-specific issues

The build scripts are configured to work with Apple Silicon Macs. If you encounter architecture-specific issues:

1. Ensure Homebrew is installed for ARM (check with `uname -m` should show arm64)
2. Qt from Homebrew on ARM Mac will be native ARM or universal binary
3. The deployment target of 10.6 ensures compatibility with older macOS versions

### Xcode path issues

If Xcode path errors occur:

```bash
# Set Xcode path explicitly
sudo xcode-select -s /Applications/Xcode.app/Contents/Developer

# Verify
xcode-select -p
```

## Build Configuration Options

The qmake project supports various configuration options. Common ones include:

- `CONFIG+=release` - Release build with optimizations (default)
- `CONFIG+=debug` - Debug build with symbols and no optimization
- `QMAKE_MACOSX_DEPLOYMENT_TARGET=10.6` - Minimum macOS version supported

## Clean Build Environment

If you have persistent build issues, start fresh:

```bash
# Clean all artifacts
./clean-build.sh

# Or manually clean everything
rm -rf GeneSysLib/build-* iConfig/iConfig/build/ iConfig/iConfig/.qmake.*
./build-app.sh release
```

## Project Structure

```
iConfig/
├── build-setup.sh          # Environment setup script
├── build-app.sh            # Main build script
├── clean-build.sh          # Clean + build script
├── BUILD-README.md         # This file
│
├── GeneSysLib/             # Core library source
│   └── Qt/GeneSysLib.pro   # Library build configuration
│       ├── Base/           # Foundation classes
│       ├── Audio/          # Audio handling
│       ├── MIDI/           # MIDI management
│       └── Device/         # Device communication
│
├── iConfig/iConfig/        # Main application source
│   ├── Main.cpp            # Application entry point
│   ├── MainWindow.*        # Main window
│   ├── iConnectivityiConfig.pro  # App build configuration
│   └── qtsinglapplication/ # Single-instance support
│
└── rtmidi-2.1.1/           # MIDI library (cloned by setup script)
    └── RtMidi.h/cpp        # Cross-platform MIDI API
```

## License

This project is released under GPLv3 license:
https://opensource.org/licenses/gpl-3.0.html

## Support

For issues specific to the build process, check the troubleshooting section above. For application-specific issues or feature requests, please refer to the main project documentation or contact iConnectivity support.
