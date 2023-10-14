#include "CopyCat.ih"

void CopyCat::ntbsCopy(char *dest, char *orig)
{
  for(int idx = 0; (*dest[idx] = *orig[idx]) != '\0'; ++idx)
  {} 
}