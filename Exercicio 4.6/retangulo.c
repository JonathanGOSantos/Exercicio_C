#include <stdio.h>
#include "../macros.h"

void retangulo(int l, int c) {
    int i, j;
    for(i = 0; i < c; i++) {
        for(j = 0; j < l; j++) {
            printf("%c%c",219,219);
        }
        printf("\n");
    }
}

int main() {
    clrscr();
    int l, c;
    while(true) {
        printf("Digite o tamanho do quadrado: ");
        scanf("%d x %d", &l, &c);
        
        retangulo(l, c);
    }
}