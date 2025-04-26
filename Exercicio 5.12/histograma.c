#include <stdio.h>
#define qtd_dias 7

char dias[qtd_dias] = {'D', 'S', 'T', 'Q', 'Q', 'S', 'S'};

float media(float t[])
{
  int i;
  float s = 0;
  for(i = 0; i<qtd_dias; i++)
  {
    s += t[i];
  }
  return s/qtd_dias;
}

void histograma(float temp[])
{
  int c, l; 

  
  for(l = 50; l > 0; l--)
  {
    for(c = 0; c < qtd_dias; c++)
    {
      if(temp[c] - l >= 0) printf("%c ", 219);
      else printf("%c%c", 32, 32);
    }
    printf("\n");
  }

  for(c = 0; c < qtd_dias; c++) printf("%c ", dias[c]);
  printf("\n");
}

int main()
{
  float temp[qtd_dias];

  puts("Informe as temperaturas: ");
  int i;
  for(i = 0; i < qtd_dias; i++)
  {
    printf("%c: ", dias[i]);
    scanf("%f", &temp[i]);
  }
  printf("\n");
  histograma(temp);
}