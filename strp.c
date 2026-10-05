/* Strp.c File Prishaa Kapasi */
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

char *Str_concat(char *pcDst, const char *pcSrc){
   char *pcDstEnd;
   assert(pcDst != NULL);
   assert(pcSrc != NULL);
   pcDstEnd = pcDst;
   while(*pcDstEnd != '\0'){
      pcDstEnd++;
   }
   while(*pcSrc != '\0'){
      *pcDstEnd = *pcSrc;
      pcSrc++;
      pcDstEnd++;
   }
   *pcDstEnd = '\0';
   return pcDst;
}

int Str_compare(const char *pcS1, const char *pcS2){
   const char *pointerS1;
   const char *pointerS2;
   assert(pcS1 != NULL);
   assert(pcS2 != NULL);
   pointerS1 = pcS1;
   pointerS2 = pcS2;
   while((*pointerS1 != '\0') || (*pointerS2 != '\0')){
      if(*pointerS1 < *pointerS2){
            return -1;
      }
      else if(*pointerS1 > *pointerS2){
            return 1;
      }
      pointerS1++;
      pointerS2++;
  }
  return 0; 
}

char *Str_search(const char *pcHaystack, const char *pcNeedle){
   const char *pcStart;
   const char *pcNeedleStart;
   assert(pcHaystack != NULL);
   assert(pcNeedle != NULL);
   pcStart = pcHaystack;
   pcNeedleStart = pcNeedle;
   if(*pcNeedleStart == '\0'){
      return (char *)pcHaystack;
   }
   while(*pcStart != '\0'){
      pcHaystack = pcStart;
      pcNeedle = pcNeedleStart;
      while((*pcNeedle != '\0') && (*pcHaystack == *pcNeedle)){
         pcNeedle++;
         pcHaystack++;
      }
      if(*pcNeedle == '\0'){
         return (char *)pcStart;
      }
      pcStart++;
   }
   return NULL;
}
