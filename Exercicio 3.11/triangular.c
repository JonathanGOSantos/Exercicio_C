#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");

    int i = 0, sum = 0, num, triangular;
    printf("Digite um numero: ");
    scanf("%d", &num);

    for(i = 0; sum < num; i++) {
        sum += i;

        if (sum == num) {
            triangular = 1;
        } 
    }
    
    if (triangular) {
        printf("O numero %d e triangular!", num);
    } else {
        printf("O numero %d nao e triangular!", num);
    }

    return 0;
}