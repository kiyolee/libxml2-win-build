# libxml2-win-build

libxml2 Windows build with Visual Studio.

This version is libxml2-2.9.8.

See win-build-info for general information about the
win-build effort.

To build, simply open the required solution file, and
you know how to use Visual Studio, right?
(or perhaps this is the wrong place for you.)

Depends on libiconv-win-build and zlib-win-build, currently some hard references
assuming both libiconv-win-build and zlib-win-build sit next to libxml2-win-build.

Basically, in a command prompt:

> \> cd {somewhere}\\  
> \> git clone http://github.com/kiyolee/libiconv-win-build.git  
> \> git clone http://github.com/kiyolee/zlib-win-build.git  
> \> git clone http://github.com/kiyolee/libxml2-win-build.git

Build libiconv and zlib first and then libxml2, with the same corresponding Visual Studio solution of course.
