#include <stdio.h>

int prod(int fat1, int fat2) 
{
  static int exec = 0;
  if(exec > fat2) return fat1;
  fat1 += fat2;
  exec++;
  return prod(fat1, fat2);
}

int main() {
  int fat1, fat2;
  printf("Digite a multiplicação: ");
  scanf("%d * %d", &fat1, &fat2);

  printf("%d", prod(fat1, fat2));
}