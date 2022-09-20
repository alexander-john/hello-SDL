# hello-SDL

This is a simple SDL program that renders a blue window.

https://user-images.githubusercontent.com/13820251/190077996-2123b41a-9d8e-4762-9125-0bd6299a8927.mp4

## How to build it yourself!

What you'll need:
- Windows OS
- Microsoft Visual Studio
- SDL latest release

Hopefully you are already using Windows. If not, come back when you have a Windows PC. Getting Microsoft Visual Studio is simple. Go to: https://visualstudio.microsoft.com/ and download **"Visual Studio"**. Do not download "Visual Studio Code". To acquire the latest release of SDL go to: https://github.com/libsdl-org/SDL/releases and in the **"Assets"** dropdown download SDL2-x.xx.x-VC.zip.

### Setup development environment

0. In the downloaded files, open "hello-SDL.sln".
1. In "Project Properties" go to "VC++ Directories"/ "Include Directories" / "Edit". Using the little folder navigate to the downloaded SDL2-x.xx.x-VC / and add the "include" folder.
2. After go to "Linker" / "Input" / "Additional Dependencies" / "Edit" / and type "SDL2.lib" press enter and type "SDL2main.lib".
3. Then go back to "VC++ Directories" / "Library Directories" / "Edit". Using the little folder navigate to "SDL2-x.xx.x-VC" / "lib" / and select the "x64" folder.
4. Then in Windows Settings naviagte to "Edit the system environment variables" / "Environment Variables" / "System variables" / "Path" / "Edit..." then "New" / "Browse" / navigate to "SDL2-x.xx.x-VC" / "lib" / and include "x64".
5. If you found everything easy to follow you should be able to build the program!


