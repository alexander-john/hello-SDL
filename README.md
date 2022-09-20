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

0. Open "hello-SDL.sln"
1. In "Project Properties" navigate to "VC++ Directories"/ "Include Directories" / "Edit". Using the little folder navigate to the downloaded SDL2-x.xx.x-VC and add the "include" folder
2. Now in "Project Properties" go to "Linker" / "Input" / "Additional Dependencies" / "Edit" / and type "SDL2.lib" press enter and type "SDL2main.lib"
3. Back in "VC++ Directories" naviagte to "Library Directories" / "Edit". Using the little folder navigate to "SDL2-x.xx.x-VC" / "lib" / and select the "x64" folder
4. Then in Windows Settings search "Edit the system environment variables" navigate to "Environment Variables" / "System variables" / "Path" / "Edit..." then "New" / "Browse" navigate to "SDL2-x.xx.x-VC" / "lib" / and select "x64"
5. If you found everything easy to follow you should be able to build the program!


