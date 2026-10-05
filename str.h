/* Str.h File Prishaa Kapasi */
#ifndef STR_H
#define STR_H

#include <stddef.h>

/* this function returns length of string pointed by pcSrc excluding
 the null byte. pcSRC must not be NULL  */
size_t Str_getLength(const char *pcSrc);

/* this function copies the string 
pointed by pcSrc into string at buffer pointed by pcDst. 
The function returns pcdst. pcDst must not be NULL
and have enough length of pcSrc+1 */
char *Str_copy(char *pcDst, const char *pcSrc);

/*this function adds copy of string that pcSrc points to, to end of
 pcDst string. dst must be a string and have size
 that is pcdstlength + pcsrclength + 1. it returns pcdst. both pointers
must not be NULL and point to strings */
char *Str_concat(char *pcDst, const char *pcSrc);

/*Compares string that pcS1 points to and pcS2 points to and returns
an integer based off this comparison. It returns 0 if they're equal, 
negative if pcS1 is less than pcS2 and positive if
pcS1 is greater than pcS2.  both pcS1 and pcS2 must point 
to a string and not be NULL. this is based off of unsigned char values
 */
int Str_compare(const char *pcS1, const char *pcS2);

/* this function finds the first time the substring pcNeedle is 
found in the string pcHaystack. the nullbytes are not compared. 
the function returns a pointer to the beginning of the located
substring and NULL if not found. both pcHaystack and 
pcNeedle must not be NULL and both must be strings. if 
pcNeedle is the empty string, it returns pcHaystack  */
char *Str_search(const char *pcHaystack, const char *pcNeedle);

#endif
