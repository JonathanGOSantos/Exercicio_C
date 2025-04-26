#include <stdio.h>

void regr(int num)
{
  if (num == 0) return;
  printf("%d \n", num);
  return regr(--num);
}

int main() 
{
  int num;
  printf("Digite um numero: ");
  scanf("%d", &num);

  regr(num);
}