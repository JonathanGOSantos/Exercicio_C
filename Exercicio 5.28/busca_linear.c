#include <stdio.h>

int pos(int x, int l[], int n)
{
  int i;
  for(i = 0; i < n; i++)
    if(x == l[i])
      return i;
  return -1;
}