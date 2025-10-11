#ifndef __LIBXML_WIN32_CONFIG__
#define __LIBXML_WIN32_CONFIG__

/* Define to 1 if you have the declaration of 'getentropy', and to 0 if you
   don't. */
#define HAVE_DECL_GETENTROPY 0

/* Define to 1 if you have the declaration of 'glob', and to 0 if you don't.
   */
#define HAVE_DECL_GLOB 0

/* Define to 1 if you have the declaration of 'mmap', and to 0 if you don't.
   */
#define HAVE_DECL_MMAP 0

/* Define if __attribute__((destructor)) is accepted */
/* #undef HAVE_FUNC_ATTRIBUTE_DESTRUCTOR */

/* Have dlopen based dso */
/* #undef HAVE_DLOPEN */

/* Define if history library is there (-lhistory) */
/* #undef HAVE_LIBHISTORY */

/* Define if readline library is there (-lreadline) */
/* #undef HAVE_LIBREADLINE */

/* Have shl_load based dso */
/* #undef HAVE_SHLLOAD */

/* Define to 1 if you have the <stdint.h> header file. */
#if defined(__MINGW32__) || (defined(_MSC_VER) && _MSC_VER >= 1600)
#define HAVE_STDINT_H 1
#else
/* #undef HAVE_STDINT_H */
#endif

/* System configuration directory (/etc) */
#ifdef _WIN32
#define XML_SYSCONFDIR "C:/etc"
#else
#define XML_SYSCONFDIR "/etc"
#endif

/* TLS specifier */
/* #undef XML_THREAD_LOCAL */

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

#endif /* __LIBXML_WIN32_CONFIG__ */
