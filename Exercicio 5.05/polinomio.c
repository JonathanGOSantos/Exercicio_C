#include <stdio.h>
#include <math.h>

int polinomio(int coeficientes[], int qtd_nums, int x)
{
  int pol = 0;
  for (int i = 0; i < qtd_nums; i++)
  {
    pol += coeficientes[i] * pow(x, i);
  }
  return pol;
}

int main()
{
  int qtd_nums;
  printf("Digite a quantidade de numeros: ");
  scanf("%d", &qtd_nums);

  int coeficientes[qtd_nums];
  for (int i = 0; i < qtd_nums; i++)
  {
    printf("Digite o coeficiente a%d: ", i);
    scanf("%d", &coeficientes[i]);
  }

  int qtd_x;
  printf("Digite a quantidade de valores de x: ");
  scanf("%d", &qtd_x);

  int x[qtd_x];
  for (int i = 0; i < qtd_x; i++)
  {
    printf("Digite o valor de x%d: ", i + 1);
    scanf("%d", &x[i]);
  }

  for (int i = 0; i < qtd_x; i++)
  {
    printf("P(x%d) = %d\n", i + 1, polinomio(coeficientes, qtd_nums, x[i]));
  }

  return 0;
}