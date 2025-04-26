#include <stdio.h>
#include <stdlib.h>

int pot(int base, int expoente) {
  int result = 1;

  for(int i = 1; i <= expoente; i++) {
    result *= base;
  }

  return result;
}

int main() {
  system("cls");
  int base, expoente;
  
  printf("Digite a expressao (base^expoente): ");
  scanf("%d ^ %d", &base, &expoente);

  printf("%d^%d: %d \n", base, expoente, pot(base, expoente));
  system("pause");
}