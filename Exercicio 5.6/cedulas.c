#include <stdio.h>

int main()
{
  int cedulas[7] = {1, 2, 5, 10, 20, 50, 100};
  int valor = 0;
  int utilizadas[7] = {0, 0, 0, 0, 0, 0, 0};

  printf("Digite o valor: ");
  scanf("%d", &valor);

  int i;
  for (i = 6; i >= 0; i--)
  {
    int cedula = cedulas[i];
    while(valor - cedula >= 0)
    {
      valor -= cedula;
      utilizadas[i]++;
    }
  }

  for(i = 6; i >= 0; i--)
  {
    printf("%d %s de R$ %d,00\n", utilizadas[i], utilizadas[i] != 1 ? "cedulas" : "cedula ", cedulas[i]);
  }
}