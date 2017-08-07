ManagedFBX is a .NET wrapper for Autodesk's FBX SDK, written in C++/CLI. For use in Unity.

# Building from source

(**You must install these in this order**)
* Install VS2008  Follow these [instructions](https://stackoverflow.com/questions/24775363/how-to-build-with-v90-platform-toolset-in-vs2012-without-vs2008-using-windows-s)
* Install [VS2010](https://my.visualstudio.com/Downloads?q=visual%20studio%202010&wt.mc_id=o~msft~vscom~older-downloads)
* Install VS2017
* Install the [FBX SDK](http://usa.autodesk.com/adsk/servlet/pc/item?siteID=123112&id=10775847)
* Ensure that the ManagedFbx project is pointing at the correct library and headers for the SDK
* Build the solution and verify it's working correctly by running the sample project provided
