#include <assert.h>
#include "str.h"
size_t Str_getLength(const char *pcSrc)
{
   const char *pcEnd;
   assert(pcSrc != NULL);
   pcEnd = pcSrc;
   while (*pcEnd != '\0')
      pcEnd++;
   return (size_t)(pcEnd - pcSrc);
}

char *Str_copy(char *pcDst, const char *pcSrc){
   char *pcStart;
   assert(pcSrc != NULL);
   assert(pcDst != NULL);
   pcStart = pcDst;
   while(*pcSrc != '\0'){
      *pcDst = *pcSrc;
      pcSrc++;
      pcDst++;
   }
   *pcDst = '\0';
   return pcStart;
}
