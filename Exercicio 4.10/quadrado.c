#include <stdio.h>
#include <stdlib.h>

int quad(int num) {
  int resultado = 0;

  for(int i = 1; i <= (num+num-1); i += 2) {
    resultado += i;
  }

  return resultado;
}

int main() {
  system("cls");
  int num;

  printf("Digite um número: ");
  scanf("%d", &num);

  printf("O quadrado de %d é: %d \n", num, quad(num));
  system("pause");
}