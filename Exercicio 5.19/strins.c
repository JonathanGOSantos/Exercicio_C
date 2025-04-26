#include <stdio.h>

int strlen(char s[])
{
    int chars = 0;
    while(s[chars] != '\0') chars++;
    return chars;
}

void strins(char s[], char c, int p)
{
  int slen = strlen(s);

  if(p > slen) {
    s[slen-1] = c;
    return;
  }

  int i;
  for (i = slen; i >= p; i--)
  {
    s[i] = s[i-1];
  }
  s[p-1] = c;
  s[slen+1] = '\0';

  printf("%s", s);
}

int main()
{
  char s[100], c;
  int p;

  printf("Digite a palavra: ");
  scanf(" %s", &s);
  printf("Digite o caractere a ser insrido: ");
  scanf(" %c", &c);
  printf("Digite a posicao que deve ser colocado: ");
  scanf(" %d", &p);

  strins(s, c, p);
}