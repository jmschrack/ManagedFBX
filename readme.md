ManagedFBX is a .NET wrapper for Autodesk's FBX SDK, written in C++/CLI. For use in Unity.

# Building from source
These steps will enable "Platform Tools v90" in VS2017 community
(**You must install these in this order**)
* Install VS2008  Follow these [instructions](#How-to-get-VS2008)
* Install [VS2010](https://my.visualstudio.com/Downloads?q=visual%20studio%202010&wt.mc_id=o~msft~vscom~older-downloads)
* Install [VS2017](https://www.visualstudio.com/thank-you-downloading-visual-studio/?sku=Community&rel=15)
* Install the [FBX SDK](http://usa.autodesk.com/adsk/servlet/pc/item?siteID=123112&id=10775847)
* Ensure that the ManagedFbx project is pointing at the correct library and headers for the SDK
* Build the solution and verify it's working correctly by running the sample project provided


# How to get VS2008 
* Download the [x86 DVD of SDK 7.0 SP1](http://www.microsoft.com/en-us/download/details.aspx?id=18950) (GRMSDK_EN_DVD.iso). Mount the ISO or extract its contents, and manually install the MSI files from the following folders under the Setup folder:
  * WinSDK (this may fail, it's ok)
  * WinSDKBuild
  * WinSDKInterop
  * WinSDKTools
  * WinSDKWin32Tools
  * vc_stdx86
  * vc_stdamd64
  * winsdk_intellidocs
  * WinSDKIntellisenceRefAssys
  * WinSDKNetFxTools
* Download the [x86 DVD of SDK 7.1](http://www.microsoft.com/en-us/download/details.aspx?id=8442) (GRMSDK_EN_DVD.iso). Mount the ISO or extract its contents, and manually install the MSI files from the same folders listed above (except winsdk_intellidocs, which doesn't exist).
* Go to C:\Program Files (x86)\Microsoft Visual Studio 9.0. Copy the following files from Common7\IDE to VC\bin:
  * msobj80.dll
  * mspdb80.dll
  * mspdbcore.dll
  * mspdbsrv.exe

[Courtesy to Yodan on Stack Overflow](https://stackoverflow.com/questions/24775363/how-to-build-with-v90-platform-toolset-in-vs2012-without-vs2008-using-windows-s)
