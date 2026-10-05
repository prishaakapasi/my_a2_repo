#include <assert.h>

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
