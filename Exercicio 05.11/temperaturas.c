#include <stdio.h>
#define qtd_dias 7

void histograma(char dias[], float temp[])
{
  int i;
  for(i = 0; i < qtd_dias; i++)
  {
    printf("%c%c", dias[i], 179);

    int j;
    for(j = 0; j < temp[i]; j++)
    {
      printf("%c", 254);
    }
    printf("\n");
  }
}

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

void minmax(float t[], float x[], float y[])
{
  int min, max;

  int i;
  for (i = 0; i < qtd_dias; i++)
  {
    if ((!min && min != 0) || t[i] < min) min = t[i]; 
    if ((!min && min != 0) || t[i] > max) max = t[i]; 
  }

  x[0] = min;
  y[0] = max;
}

int main()
{
  char dias[qtd_dias] = {'D', 'S', 'T', 'Q', 'Q', 'S', 'S'};
  float temp[qtd_dias], x[1], y[1];

  puts("Informe as temperaturas: ");
  int i;
  for(i = 0; i < qtd_dias; i++)
  {
    printf("%c: ", dias[i]);
    scanf("%f", &temp[i]);
  }
  printf("\n");

  minmax(temp, x, y);
  printf("Min: %.2f\n", x[0]);
  printf("Max: %.2f\n", y[0]);

  printf("Média: %.2f\n", media(temp));

  histograma(dias, temp);
}