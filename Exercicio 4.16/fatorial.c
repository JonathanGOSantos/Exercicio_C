#include <stdio.h>

int fat(int num) {
  if (num == 0) return 1;
  else return num * fat(num - 1); 
}

int main() {
  int num;
  printf("Digite um número: ");
  scanf("%d", &num);

  printf("%d", fat(num));
}