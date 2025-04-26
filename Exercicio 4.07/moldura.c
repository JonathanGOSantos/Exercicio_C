#include <stdio.h>
#include <stdlib.h>

#define CANTO_SUPERIOR_ESQUERDO 201
#define CANTO_INFERIOR_ESQUERDO 200
#define CANTO_SUPERIOR_DIREITO 187
#define CANTO_INFERIOR_DIREITO 188

#define LINHA_HORIZONTAL 205
#define LINHA_VERTICAL 186
#define VAZIO 32

void moldura(int lf, int cf) {
    int l, c;
    for(l = 0; l < cf; l++) {
        for(c = 0; c < lf; c++) {
            if(l == 0 && c == 0) 
                printf("%c", CANTO_SUPERIOR_ESQUERDO);
            else if(l == 0 && c == lf - 1) 
                printf("%c", CANTO_SUPERIOR_DIREITO);
            else if(l == cf - 1 && c == 0) 
                printf("%c", CANTO_INFERIOR_ESQUERDO);
            else if(l == cf - 1 && c == lf - 1) 
                printf("%c", CANTO_INFERIOR_DIREITO);
            else if(l == 0 || l == cf - 1) 
                printf("%c%c", LINHA_HORIZONTAL, LINHA_HORIZONTAL);
            else if(c == 0 || c == lf - 1) 
                printf("%c", LINHA_VERTICAL);
            else 
                printf("%c%c", VAZIO, VAZIO);
        }
        printf("\n");
    }
}

int main() {
    system("cls");
    int l, c;
    printf("Digite o tamanho da moldura (largura x altura): ");
    scanf("%d x %d", &l, &c);

    if(l%2 != 0) l++;
    printf("\n");

    moldura(l, c);
    system("pause");
    return 0;
}
