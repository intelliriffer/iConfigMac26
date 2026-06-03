# iConfigMac26

## iConfig Source Code forked from the [Official GitHub Repository](https://github.com/iConnectivity/iConfig)

### Why this MacOs Build?

Original Iconfig is very old (2017) and on Silicon Macs runs under Rosetta. Apple is Removing Support for Rosetta, so its no longer going to function, however since I Use my iConnectAudio4+ audio Interface exclusively with iConfig, I needed to solve this, instead of running old iconfing under some VM.

### The Changes

1. Old QT and been converted to QT-6, No more wacky graphics
2. some places text has been enlarged and some heading made bold.
3. Toolbar Tabs color changed.
4. Added: Theme options under help menu. so you can set it to light even if your system is using dark mode.
5. Presets are stored in ~/Library/Application Support/iConfigMac26

### Tooling

 Claude Code with Qwen 3.5 32B model wsa used to do most of the heavy lifting followed by manual bug fixes and tweaks on Mac Silicon M5 / Tahoe 26.5

### Build Requirements

1. **Homebrew** Must be installed on Your Mac.
2. Latest xCode or at least the minimal xCode build tools that can be installed via the command
` xcode-select --install `

### Building

1. From local directory run: ` ./build-setup.sh ` this should install qt and other dependencies as needed.
2. Follow it up by running: ` ./build-app.sh ` or You Can use ` ./clean-build.sh ` this will clean the previous build remenants before building.

### Pre-Built App

You can download the latest build from the releases section if you dont want to build yourself. Please note you will have to Allow this app to run under System Settings > Privacy and Security by clicking **Open Anway**, after your mac prompts you that it cannot be opened.

### Other Docs
 
1. [BUILD-README](BUILD-README.md)
2. [LICENSE](LICENSE.md)