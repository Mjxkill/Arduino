#ifndef __MIMETABLE_H__
#define __MIMETABLE_H__

#include "WString.h"

namespace mime
{

enum type
{
  html,
  htmlgz,
  htm,
  htmgz,
  txt,
#ifndef MIMETYPE_MINIMAL    // allow to compile with only the strict minimum of mime-types
  css,
  cssgz,
  js,
  jsgz,
  json,
  png,
  gif,
  jpg,
  jpeg,
  ico,
  svg,
  ttf,
  otf,
  woff,
  woff2,
  eot,
  sfnt,
  xml,
  pdf,
  zip,
  appcache,
#endif // MIMETYPE_MINIMAL
  gz,
  none,
  maxType
};

struct Entry
{
  const char * endsWith; 
  const char * mimeType;
};


extern const Entry mimeTable[maxType];

String getContentType(const String& path);
}

#endif
