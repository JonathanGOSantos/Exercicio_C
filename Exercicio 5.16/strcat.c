#include <stdio.h>

int strlen(char s[])
{
    int chars = 0;
    while(s[chars] != '\0') chars++;
    return chars;
}

void strcat(char x[], char y[])
{
  int x_len = strlen(x);
  int y_len = strlen(y);

  int i;
  for (i = 0; i < y_len; i++)
  {
    x[i+x_len] = y[i];
  }
  printf("%s", x);
}

int main()
{
  char x[] = "facil";
  char y[] = "idade";

  strcat(x, y);
}