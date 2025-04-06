#include <stdlib.h>
#include <stdio.h>

int main() {
    system("cls");
    
    int erros;
    
    printf("Digite a quantidade de erros: ");
    scanf("%d", &erros);
    
    system("cls");
    printf("%d %s.", erros, erros == 1 ? "erro detecado" : "erros detectados");

    return 0;
}