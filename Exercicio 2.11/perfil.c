#include <stdlib.h>
#include <stdio.h>

int main() {
    system("cls");

    int dia, mes, ano, soma, R;

    printf("Digite sua data de nascimento: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    soma = ((dia*100)+mes+ano);
    
    R = ((soma/100)+(soma%100))%5;

    switch(R) {
        case 0: printf("Tímido"); break;
        case 1: printf("Sonhador"); break;
        case 2: printf("Paquerador"); break;
        case 3: printf("Atraente"); break;
        case 4: printf("Irresistível"); break;
    }
    
    return 0;
}