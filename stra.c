#include <assert.h>
#include "str.h"
size_t Str_getLength(const char pcSrc[])
{
   size_t uLength = 0;
   assert(pcSrc != NULL);
   while (pcSrc[uLength] != '\0')
      uLength++;
   return uLength;
}

char *Str_copy(char pcDst[], const char pcSrc[]){
   size_t n = 0;
   assert(pcDst != NULL);
   assert(pcSrc != NULL);
   while(pcSrc[n] != '\0'){
      pcDst[n] = pcSrc[n];
      n++;
   }
   pcDst[n] = '\0'; 
   return pcDst;
}

char *Str_concat(char pcDst[], const char  pcSrc[]){
   size_t dstPosition;
   size_t n = 0;
   assert(pcSrc != NULL);
   assert(pcDst != NULL);
   dstPosition = Str_getLength(pcDst);
   while(pcSrc[n] != '\0'){
      pcDst[dstPosition] = pcSrc[n];
      n++;
      dstPosition++;
   }
   pcDst[dstPosition] = '\0';
   return pcDst;
}
