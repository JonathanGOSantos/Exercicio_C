#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    int i, j, l, c;
    printf("Digite o tamanho do quadrado: ");
    scanf("%d x %d", &l, &c);

    for(i = 0; i < c; i++) {
        for(j = 0; j < l; j++) {
            printf("%c%c ", 219, 219);
        }
        printf("\n\n");
    }

    return 0;
}