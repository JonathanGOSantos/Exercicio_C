#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  system("clear");

  float a, b, hipotenusa;

  printf("Digite o tamanho dos catetos: ");
  scanf("%f %f", &a, &b);

  hipotenusa = sqrt(pow(a, 2) + pow(b, 2));
  printf("Hipotenusa: %.2f", hipotenusa);

  return 0;
}