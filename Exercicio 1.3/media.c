/* media.c Exercício 1.3. Dadas as duas notas de um aluno, informe a sua média final. */
#include <stdio.h>
#include <stdlib.h>

int main() {
  system("clear");

  float nota1, nota2, media;

  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);
  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);

  media = (nota1+nota2)/2;

  printf("A média do aluno foi de %.2f", media);

  return 0;
}