#include <stdio.h>

int strpos(char s[], char c)
{
  int i = 0;
  int pos;
  while(s[i] != '\0')
  {
    if(s[i] == c) {
      pos = i;
      break;
    }
    i++;
  }
  if (!pos) pos = -1;

  return pos;
}

int main()
{
  char s[] = "Jonathan";
  char c = 'a';
  printf("%d", strpos(s, c));
}