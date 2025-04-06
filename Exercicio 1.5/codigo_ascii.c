#include <stdio.h>
#include <stdlib.h>

int main() {
  system("clear");

  char caractere;

  printf("Digite um caractere: ");
  scanf("%c", &caractere);

  printf("\n O caractere em Octal: %o", caractere);
  printf("\n O caractere em Decimal: %d", caractere);
  printf("\n O caractere em Hexadecimal: %x", caractere);

  return 0;
}