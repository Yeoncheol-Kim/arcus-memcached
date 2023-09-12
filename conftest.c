/* confdefs.h */
#define PACKAGE_NAME "arcus-memcached"
#define PACKAGE_TARNAME "arcus-memcached"
#define PACKAGE_VERSION "1.13.4-22"
#define PACKAGE_STRING "arcus-memcached 1.13.4-22"
#define PACKAGE_BUGREPORT "openarcus@googlegroups.com"
#define PACKAGE_URL ""
#define PACKAGE "arcus-memcached"
#define VERSION "1.13.4-22"
#define HAVE_STDIO_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_STRINGS_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_UNISTD_H 1
#define HAVE_DLFCN_H 1
#define HAVE_SASL_SASL_H 1
#define HAVE_SYSEXITS_H 1
#define HAVE_SYS_WAIT_H 1
#define HAVE_SYS_SOCKET_H 1
#define HAVE_NETINET_IN_H 1
#define HAVE_NETDB_H 1
#define HAVE_SYS_UN_H 1
#define HAVE_SYS_RESOURCE_H 1
#define HAVE_SYS_UIO_H 1
#define HAVE_NETINET_TCP_H 1
#define HAVE_PWD_H 1
#define HAVE_SYS_MMAN_H 1
#define HAVE_SYSLOG_H 1
#define STDC_HEADERS 1
#define HAVE_DLFCN_H 1
#define LT_OBJDIR ".libs/"
#define USE_GETTIMEOFDAY 1
#define ENABLE_STICKY_ITEM 1
#define HAVE__BOOL 1
#define HAVE_STDBOOL_H 1
#define HAVE_HTONLL 1
/* end confdefs.h.  */

/* Override any GCC internal prototype to avoid an error.
   Use char because int might match the return type of a GCC
   builtin and then its argument prototype would still apply.  */
char pthread_create ();
int
main (void)
{
return pthread_create ();
  ;
  return 0;
}
