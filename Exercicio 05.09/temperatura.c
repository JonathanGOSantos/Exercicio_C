#include <stdio.h>
#define qtd_temp 7

void minmax(int t[], int x[], int y[])
{
  int min, max;

  int i;
  for (i = 0; i < qtd_temp; i++)
  {
    if ((!min && min != 0) || t[i] < min) min = t[i]; 
    if ((!min && min != 0) || t[i] > max) max = t[i]; 
  }

  x[0] = min;
  y[0] = max;
}

int main()
{
  int temp[qtd_temp], x[1], y[1];

  int i;
  puts("Informe as temperaturas: ");
  for(i = 0; i < qtd_temp; i++)
  {
    printf("%d valor? ", i+1);
    scanf("%i", &temp[i]);
  }

  minmax(temp, x, y);
  printf("Min: %d \n", x[0]);
  printf("Max: %d", y[0]);
}