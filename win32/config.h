#ifndef __LIBXML_WIN32_CONFIG__
#define __LIBXML_WIN32_CONFIG__

#if defined(__MINGW32__) || (defined(_MSC_VER) && _MSC_VER >= 1600)
  #define HAVE_STDINT_H
#endif

#if defined(_MSC_VER)
  #if _MSC_VER < 1900
    #define snprintf _snprintf
  #endif
  #if _MSC_VER >= 1600 && _MSC_VER < 1900
    #define vsnprintf(b,c,f,a) _vsnprintf(b,c,f,a)
  #endif
#endif

#if defined(_MSC_VER) && _MSC_VER >= 1600
  #define open _open
  #define close _close
  #define read _read
  #define write _write
  #define getcwd _getcwd
#endif

#ifdef _WIN32
#define XML_SYSCONFDIR "C:/etc"
#else
#define XML_SYSCONFDIR "/etc"
#endif

#endif /* __LIBXML_WIN32_CONFIG__ */

