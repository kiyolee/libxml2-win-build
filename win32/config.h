#ifndef __LIBXML_WIN32_CONFIG__
#define __LIBXML_WIN32_CONFIG__

#define SEND_ARG2_CAST
#define GETHOSTBYNAME_ARG_CAST

#define HAVE_SYS_STAT_H
#define HAVE_STAT
#define HAVE_FCNTL_H
#define HAVE_IO_H
#define HAVE_DIRECT_H

#if defined(__MINGW32__) || (defined(_MSC_VER) && _MSC_VER >= 1600)
#define HAVE_STDINT_H
#endif

#if defined(_MSC_VER) && _MSC_VER < 1900
#define snprintf _snprintf
#define vsnprintf _vsnprintf
#endif

#if defined(_MSC_VER)
#define open _open
#define close _close
#define read _read
#define write _write
#define getcwd _getcwd
#endif

#endif /* __LIBXML_WIN32_CONFIG__ */

