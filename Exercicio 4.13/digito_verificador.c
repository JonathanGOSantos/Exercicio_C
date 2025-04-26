#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int dv(int n) 
{
  int d = 0, s = 0, x = 0;

  int i;
  for (i = 2; i <= 10; i++) {
    int num = n % 10;
    n /= 10;

    s += num*i;
  }
  
  x = 11 - s%11;

  if (x>9) {
    d = 0;
  } else {
    d = x;
  }

  return d;
}

int main() 
{
  int d, n;
  system("clear");

  printf("Digite o numero (9 digitos): ");
  scanf("%d", &n);
  
  d = dv(n);
  printf("Digito verificador: %d", d);

  return 0;
}