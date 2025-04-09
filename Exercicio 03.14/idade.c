#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    int idade, menor = 0, maior = 0;

    do {
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (idade < menor) menor = idade;
        if (idade > maior) maior = idade;
    } while(idade > 0);

    printf("Mais novo: %d \n", menor);
    printf("Mais velho: %d", maior);
}