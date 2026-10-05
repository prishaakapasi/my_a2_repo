/* stra.c file Prishaa Kapasi */
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

int Str_compare(const char pcS1[], const char pcS2[]){
   size_t n = 0;
   int compare = 0; 
   assert(pcS1 != NULL);
   assert(pcS2 != NULL);
   while ((pcS1[n]!= '\0') || (pcS2[n]!= '\0')){
      if(pcS1[n] > pcS2[n]){
         compare = 1;
         break;
      }
      if(pcS1[n] < pcS2[n]){
         compare = -1;
         break;
      }
      n++;
   }
   return compare;
}

char *Str_search(const char pcHaystack[], const char pcNeedle[]){
   size_t n = 0;
   size_t substringIndex = 0;
   assert(pcHaystack != NULL);
   assert(pcNeedle != NULL);
   if(pcNeedle[0] == '\0'){
      return (char *) pcHaystack;
   }
   while(pcHaystack[n] != '\0'){
      if(pcHaystack[n] == pcNeedle[substringIndex]){
         substringIndex++;

         if(pcNeedle[substringIndex] == '\0'){
            return (char *)&pcHaystack[n - substringIndex + 1];
         }
      }
      else{
         n = n - substringIndex + 1;
         substringIndex = 0;
         continue;
      }
      n++;
   }
   return NULL; 
}
