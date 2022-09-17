# hello-SDL

This is a simple SDL program that renders a blue window.

https://user-images.githubusercontent.com/13820251/190077996-2123b41a-9d8e-4762-9125-0bd6299a8927.mp4

## How to build it yourself!

What you'll need:
- Windows OS
- Microsoft Visual Studio
- SDL latest release

Hopefully you are already using Windows. If not, come back when you have a Windows PC. Getting Microsoft Visual Studio is simple. Go to: https://visualstudio.microsoft.com/ and download **"Visual Studio"**. Do not download "Visual Studio Code". To acquire the latest release of SDL go to: https://github.com/libsdl-org/SDL/releases and in the **"Assets"** dropdown, in my case I downloaded **"SDL2-2.24.0.zip"**. It is possible there is a newer release. If so I trust you can download the appropriate version. (example: SDL2-x.xx.x.zip). 

1. Using the "Code" dropdown click "Download ZIP".

![Screenshot 2022-09-16 222400](https://user-images.githubusercontent.com/13820251/190836906-3351084e-cf99-41b4-83bf-ad80c9dac145.png)

2. On the downloaded folder, "Extract all".
3. In the newly extracted folder open "hello-SDL.sln".

If you try to "Build" your current solution you will get an error **"Cannot open include file: 'SDL.h'; No such file or directory"**. To resolve this:

1. Go to project "Properties".
2. On the left dropdown "Configuration Properties" click on "VC++ Directories".
3. Go to "Include Directories" click the small dropdown to the right.
4. Open "<Edit...>" and add the "include" folder...
