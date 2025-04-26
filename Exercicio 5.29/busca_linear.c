#include <stdio.h>

int pos(int x, int l[], int n)
{
  l[n] = x;
  int i = 0; 
  while(x != l[i])
    i++;
    
  if(x < i)
      return i;
  return -1;
}