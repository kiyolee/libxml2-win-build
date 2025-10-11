# libxml2-win-build

libxml2 Windows build with Visual Studio.

This version is libxml2-2.15.0.

To build, simply open the required solution file, and
you know how to use Visual Studio, right?
(or perhaps this is the wrong place for you.)

Depends on:
* libiconv-win-build
* zlib-win-build

There are hard references assuming all these sit next to libxml2-win-build.

Basically, in a command prompt:

> \> cd {somewhere}\\  
> \> git clone https://github.com/kiyolee/libiconv-win-build.git  
> \> git clone https://github.com/kiyolee/zlib-win-build.git  
> \> git clone https://github.com/kiyolee/libxml2-win-build.git

Build all these dependencies in the suggested order as shown above and finally libxml2, with the same corresponding Visual Studio solution of course.

This repository tracks only officially released versions of libxml2.
Check branch win-build of https://github.com/kiyolee/libxml2.git that follows latest development.
