// Notas:         {3, 7, 6, 5, 4};
// Média:         5;
// Desvio:        {2, 2, 1, 0, 1}
// Variância:     {2², 2², 1², 0², 1²};
// Variância:     {4, 4, 1, 0, 1}/5 = 2;
// Desvio Padrão: sqrt(Variância)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float media(float nums[], int qtd_nums)
{
  float total = 0, media;

  int i;
  for(i = 0; i < qtd_nums; i++) 
  {
    total += nums[i];
  }

  media = total/qtd_nums;
  return media;
}

float variancia(float nums[], int qtd_nums)
{
  float desvio[qtd_nums];
  float med = media(nums, qtd_nums); 

  int i;
  for(i = 0; i < qtd_nums; i++)
  {
    desvio[i] = abs((nums[i]-med));
  }

  float var = 0;
  for(i = 0; i < qtd_nums; i++)
  {
    var += pow(desvio[i], 2);
  }
  var /= qtd_nums;

  return var;
}

float desvio_padrao(float nums[], int qtd_nums)
{
  float var = variancia(nums, qtd_nums);
  return sqrt(var);
}

int main()
{
  float nums[99];
  int qtd_nums;

  printf("Digite a quantidade de numeros: (0 - 99) ");
  scanf("%d", &qtd_nums);

  int i = 0;
  while(i < qtd_nums)
  {
    printf("Digite um numero: ");
    scanf("%f", &nums[i]);
    i++;
  }
  printf("Desvio padrão: %f", desvio_padrao(nums, qtd_nums));
}