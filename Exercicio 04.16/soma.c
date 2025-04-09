#include <stdio.h>

int pred(int num) 
{
  return --num;
}

int suc(int num)
{
  return ++num;
}

int soma(int num1, int num2) 
{
  if(num2 == 0) return num1;
  return soma(suc(num1), pred(num2));
}

int main() {
  int num1, num2;
  printf("Digite a soma: ");
  scanf("%d + %d", &num1, &num2);

  printf("%d", soma(num1, num2));
}