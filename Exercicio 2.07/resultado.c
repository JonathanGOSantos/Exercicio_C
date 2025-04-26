#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");

    float media_aluno = 0;

    printf("Digite a média de notas do aluno: ");
    scanf("%f", &media_aluno);

    if(media_aluno < 3) {
        printf("Aluno reprovado!");
    } else if (media_aluno < 7) {
        printf("Aluno de recuperação");
    } else {
        printf("Aluno aprovado!");
    }

    return 0;
}