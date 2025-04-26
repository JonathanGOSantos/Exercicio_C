#include <stdio.h>

int strlen(char s[])
{
    int chars = 0;
    while(s[chars] != '\0') chars++;
    return chars;
}

void strdel(char s[], int p)
{
  int i;
  for(i = p-1; i < strlen(s); i++)
  {
    s[i] = s[i+1];
  }
  printf("%s", s);
}

int main()
{
  char s[] = "Jonathan";
  strdel(s, 4);
}