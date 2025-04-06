#include <stdio.h>
#include <stdlib.h>

int main() {
  system("clear");

  float celsius, fahrenheit;

  printf("Digite a temperatura em graus Fahrenheit: ");
  scanf("%f", &fahrenheit);

  celsius = (fahrenheit - 32) * 5/9;

  printf("A temperatura em graus Celsius: %.2f", celsius);

  return 0;
}