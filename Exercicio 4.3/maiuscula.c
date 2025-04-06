#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "macros.h"

int main() {
    system("cls");

    char ch;

    printf("Digite uma letra: ");
    scanf("%c", &ch);

    printf("Minuscula: %c", minuscula(ch));
    printf("\n");
    printf("Maiuscula: %c", maiuscula(ch));
    printf("\n");
    printf("%s", eh_maiuscula(ch) ? "Maiuscula" : "Minuscula");
}