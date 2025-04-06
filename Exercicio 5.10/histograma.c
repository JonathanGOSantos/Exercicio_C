#include <stdio.h>
#define qtd_dias 7

void histograma(char dias[], int temp[])
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

int main()
{
  char dias[qtd_dias] = {'D', 'S', 'T', 'Q', 'Q', 'S', 'S'};
  int temp[qtd_dias];

  puts("Informe as temperaturas: ");
  int i;
  for(i = 0; i < qtd_dias; i++)
  {
    printf("%c: ", dias[i]);
    scanf("%i", &temp[i]);
  }
  printf("\n");
  histograma(dias, temp);
}