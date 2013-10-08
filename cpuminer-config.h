/* cpuminer-config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
#undef CRAY_STACKSEG_END

/* Define to 1 if using `alloca.c'. */
#undef C_ALLOCA

/* Define to 1 if you have `alloca', as a function or macro. */
#undef HAVE_ALLOCA

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#undef HAVE_ALLOCA_H

/* Define to 1 if you have the declaration of `be32dec', and to 0 if you
   don't. */
#undef HAVE_DECL_BE32DEC

/* Define to 1 if you have the declaration of `be32enc', and to 0 if you
   don't. */
#undef HAVE_DECL_BE32ENC

/* Define to 1 if you have the declaration of `le32dec', and to 0 if you
   don't. */
#undef HAVE_DECL_LE32DEC

/* Define to 1 if you have the declaration of `le32enc', and to 0 if you
   don't. */
#undef HAVE_DECL_LE32ENC

/* Define to 1 if you have the `getopt_long' function. */
#define HAVE_GETOPT_LONG 1

/* Define to 1 if you have the <inttypes.h> header file. */
#undef HAVE_INTTYPES_H

/* Define to 1 if you have a functional curl library. */
#undef HAVE_LIBCURL

/* Define to 1 if you have the <memory.h> header file. */
#undef HAVE_MEMORY_H

/* Define to 1 if you have the <stdint.h> header file. */
#undef HAVE_STDINT_H

/* Define to 1 if you have the <stdlib.h> header file. */
#undef HAVE_STDLIB_H

/* Define to 1 if you have the <strings.h> header file. */
#undef HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#undef HAVE_STRING_H

/* Define to 1 if you have the <syslog.h> header file. */
#undef HAVE_SYSLOG_H

/* Define to 1 if you have the <sys/endian.h> header file. */
#undef HAVE_SYS_ENDIAN_H

/* Define to 1 if you have the <sys/param.h> header file. */
#undef HAVE_SYS_PARAM_H

/* Define to 1 if you have the <sys/stat.h> header file. */
#undef HAVE_SYS_STAT_H

/* Define to 1 if you have the <sys/sysctl.h> header file. */
#undef HAVE_SYS_SYSCTL_H

/* Define to 1 if you have the <sys/types.h> header file. */
#undef HAVE_SYS_TYPES_H

/* Define to 1 if you have the <unistd.h> header file. */
#undef HAVE_UNISTD_H

/* Defined if libcurl supports AsynchDNS */
#undef LIBCURL_FEATURE_ASYNCHDNS

/* Defined if libcurl supports IDN */
#undef LIBCURL_FEATURE_IDN

/* Defined if libcurl supports IPv6 */
#undef LIBCURL_FEATURE_IPV6

/* Defined if libcurl supports KRB4 */
#undef LIBCURL_FEATURE_KRB4

/* Defined if libcurl supports libz */
#undef LIBCURL_FEATURE_LIBZ

/* Defined if libcurl supports NTLM */
#undef LIBCURL_FEATURE_NTLM

/* Defined if libcurl supports SSL */
#undef LIBCURL_FEATURE_SSL

/* Defined if libcurl supports SSPI */
#undef LIBCURL_FEATURE_SSPI

/* Defined if libcurl supports DICT */
#undef LIBCURL_PROTOCOL_DICT

/* Defined if libcurl supports FILE */
#undef LIBCURL_PROTOCOL_FILE

/* Defined if libcurl supports FTP */
#undef LIBCURL_PROTOCOL_FTP

/* Defined if libcurl supports FTPS */
#undef LIBCURL_PROTOCOL_FTPS

/* Defined if libcurl supports HTTP */
#undef LIBCURL_PROTOCOL_HTTP

/* Defined if libcurl supports HTTPS */
#undef LIBCURL_PROTOCOL_HTTPS

/* Defined if libcurl supports IMAP */
#undef LIBCURL_PROTOCOL_IMAP

/* Defined if libcurl supports LDAP */
#undef LIBCURL_PROTOCOL_LDAP

/* Defined if libcurl supports POP3 */
#undef LIBCURL_PROTOCOL_POP3

/* Defined if libcurl supports RTSP */
#undef LIBCURL_PROTOCOL_RTSP

/* Defined if libcurl supports SMTP */
#undef LIBCURL_PROTOCOL_SMTP

/* Defined if libcurl supports TELNET */
#undef LIBCURL_PROTOCOL_TELNET

/* Defined if libcurl supports TFTP */
#undef LIBCURL_PROTOCOL_TFTP

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
#undef NO_MINUS_C_MINUS_O

/* Name of package */
#undef PACKAGE

/* Define to the address where bug reports for this package should be sent. */
#undef PACKAGE_BUGREPORT

/* Define to the full name of this package. */
#define PACKAGE_NAME "cudaminer"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "cudaminer 2013.10.08"

/* Define to the one symbol short name of this package. */
#undef PACKAGE_TARNAME

/* Define to the home page for this package. */
#undef PACKAGE_URL

/* Define to the version of this package. */
#define PACKAGE_VERSION "2013.10.08"

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
#undef STACK_DIRECTION

/* Define to 1 if you have the ANSI C header files. */
#undef STDC_HEADERS

/* Define to 1 if AVX assembly is available. */
#undef USE_AVX

/* Define to 1 if XOP assembly is available. */
#undef USE_XOP

/* Version number of package */
#undef VERSION

/* Define curl_free() as free() if our version of curl lacks curl_free. */
#undef curl_free

/* Define to `unsigned int' if <sys/types.h> does not define. */
#undef size_t
