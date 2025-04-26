#include <stdio.h>
#include <stdlib.h>

int fat(int num) {
  int result = 1;

  for(int i = num; i > 0; i--) {
    result *= i;
  }

  return result;
}

int main() {
  system("cls");
  int num;
  
  printf("Digite um número: ");
  scanf("%d", &num);

  printf("O fatorial de %d: %d", num, fat(num));
  system("pause");
}