# simple-cplusplus
First steps into C++ with Visual Studio Code

## Purpose

To get my hands dirty with C++

## Setup

### Installations

#### Compiler/Debugger

- [macOS - XCode](https://developer.apple.com/xcode/)
- [Windows - MinGW](http://www.mingw.org/)
- [Linux - GCC](http://www.mingw.org/)

#### VS Code:

- Microsoft C/C++ extension

### Project Files

#### Basic

1. Create `app.cpp`

#### Building Your Code

1. Open **Command Palette** (⇧⌘P)
1. Select **Tasks: Configure Tasks**
1. Select **Create tasks.json file from templates**
1. Select **Others** (a task will be created to run an external command)
1. `tasks.json` should now exist under **.vscode** in your project directory
1. Change the `command` to the command line expression you use to build your application (for example `g++`)
1. Add any required args (for example `-g` to build for debugging)
1. You may also change `label` to be more descriptive

See *[Integrate with External Tools via Tasks](https://code.visualstudio.com/docs/editor/tasks)* for more information about Tasks

#### Intellisense

1. Open **Command Palette** (⇧⌘P)
1. Select **C/Cpp: Edit Configurations**
1. `c_cpp_properties.json` should now exist under **.vscode** in your project directory

#### Debugging

1. Open **Command Palette** (⇧⌘P)
1. Select **Debug: Open launch.json**
1. When prompted in **Select Environment**, select **C++ (GBD/LLDB)**
1. Update the `program` property with the path to the program you are debugging

See *[Configure launch.json for C/C++ debugging](https://github.com/Microsoft/vscode-cpptools/blob/master/launch.md)* for more information

## Troubleshooting

## Resources

- [C/C++ for VS Code](https://code.visualstudio.com/docs/languages/cpp)