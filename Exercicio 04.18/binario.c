#include <stdio.h>

void bin(unsigned long int num)
{ //          11
  int quociente = num/2; // 5 | 4 | 2 | 1
  int resto = num%2;     // 1 | 1 | 0 | 1 
  
  if (quociente >= 2) bin(quociente);

  if (quociente < 2) printf("%d", quociente);
  printf("%d", resto); // 1011
  return;
}

int main() 
{
  unsigned long int num;
  printf("Digite um numero: ");
  scanf("%ld", &num);

  bin(num);
}