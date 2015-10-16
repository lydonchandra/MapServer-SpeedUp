#ifndef _MAPSERVER_CONFIG_H
#define _MAPSERVER_CONFIG_H

#define USE_PROJ 1
#define USE_GD 1
#define USE_GD_GIF 1
#define USE_GD_PNG 1
#define USE_GD_JPEG 1
#define USE_GD_FREETYPE 1
#define USE_POSTGIS 1
#define USE_GDAL 1
#define USE_OGR 1
#define USE_WMS_SVR 1
#define USE_WCS_SVR 1
#define USE_WFS_SVR 1
#define USE_SOS_SVR 1
#define USE_WFS_LYR 1
#define USE_WMS_LYR 1
#define USE_CURL 1
#define USE_CAIRO 1
#define USE_GEOS 1
#define USE_GIF 1
#define USE_JPEG 1
#define USE_PNG 1
#define USE_ICONV 1
#define USE_FRIBIDI 1
#define USE_LIBXML2 1
#define USE_FASTCGI 1
//#define USE_MYSQL 0
#define USE_THREAD 1
#define USE_KML 1
#define USE_POINT_Z_M 1
//#define USE_ORACLESPATIAL 0
//#define USE_EXEMPI 1
//#define USE_XMLMAPFILE 1
#define USE_GENERIC_MS_NINT 1
#define POSTGIS_HAS_SERVER_VERSION 1
#define USE_SVG_CAIRO 1
//#define USE_RSVG 0
//#define USE_SDE 0
//#define SDE64 

/*windows specific hacks*/
#if defined(_WIN32)
#define REGEX_MALLOC 1
#define USE_GENERIC_MS_NINT 1
#endif


//#define HAVE_STRRSTR 1
//#define HAVE_STRCASECMP 1
//#define HAVE_STRCASESTR 1
#define HAVE_STRDUP 1
//#define HAVE_STRLCAT 1
//#define HAVE_STRLCPY 1
//#define HAVE_STRLEN 1
//#define HAVE_STRNCASECMP 1
//#define HAVE_VSNPRINTF 1
//#define HAVE_DLFCN_H 1

//#define HAVE_LRINTF 1
//#define HAVE_LRINT 1
//#define HAVE_SYNC_FETCH_AND_ADD 1
     

#endif
