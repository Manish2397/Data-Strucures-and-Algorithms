Fast Olympic Coding plugin for Sublime Text 3
================
 * [Installation](#installation)
 * [Test Manager](#testmanager)
 * [Settings](#settings)
 * [Stress Testing](#stresstesting)
 * [Class Completion](#classcompletion)
 * [C++ Lint](#cpplint)
 * [Debugger](#debugger)
 
### Installation
 * Install via [Package Control](https://packagecontrol.io/packages/CppFastOlympicCoding)
 * Install manually:<br>
       [download plugin](https://github.com/Jatana/FastOlympicCoding/archive/master.zip) into packages (`preferences — browse packages`)<br>
       `Warning! rename plugin folder to FastOlympicCoding`

### TestManager
 ![TestManager](ScreenShots/TestManager.gif)
#### TestManager Keybindings
 * <kbd>ctrl+b (OSX)</kbd> <kbd>ctrl+alt+b (Linux + Win)</kbd> compile and run
 * <kbd>ctrl+enter</kbd> new test
 * <kbd>ctrl+c (OSX)</kbd>  <kbd>ctrl+x (Linux + Win)</kbd> kill process
 * <kbd>ctrl+shift+b (OSX)</kbd> run with debugger
 * <kbd>ctrl+d</kbd> delete test
 * <kbd>cmd+k, cmd+p (OSX)</kbd> <kbd>ctrl+k, ctrl+p (Linux + Win)</kbd> close/open right panel

### Settings
 * to edit settings
   * press <kbd>cmd+shift+p (OSX)</kbd> <kbd>ctrl+shift+p (Linux + Win)</kbd> and type `Open Settings`
   * or `tools — FastOlympicCoding — settings`

### StressTesting
 ![StressTesting](ScreenShots/Stress.gif)
 
 * to stress you need to implement three following files:
   * `<name>.cpp` - program that works incorrect
   * `<name>__Good.cpp` - program that works correct
   * `<name>__Generator.cpp` - program that generates tests, you can read a seed for random in input

### ClassCompletion
 ![ClassCompletion](ScreenShots/ClassComplete.gif)

 * to edit completions open settings

### CppLint
 ![CppLint](ScreenShots/CppLint.png)
 
 * to edit lint open settings
 
### Debugger
 ![Debugger](ScreenShots/Debugger.png)

 * debugger only for OSX
 * <kbd>ctrl+shift+b</kbd> to run with debugger
 * hover cursor on variable to see its value
 * also you can select frame (type `FastOlympicCoding: Select Frame` on command pallete)
 * the only one dependency is the xcode (you can install it with `xcode-select --install`)

