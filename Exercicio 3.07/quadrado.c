#include <stdio.h>
#include <stdlib.h>

int main() {
  system("cls");
  int num, resultado = 0;

  printf("Digite um número: ");
  scanf("%d", &num);

  for(int i = 1; i <= (num+num-1); i += 2) {
    resultado += i;
  }
  
  printf("O quadrado de %d é: %d \n", num, resultado);
  system("pause");
}