#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

void gotoxy(int x, int y) {
    // Comando ANSI para mover o cursor para a posição (x, y)
    printf("\033[%d;%dH", y, x);
}

void clrscr() {
    // Comando ANSI para limpar a tela
    printf("\033[H\033[J");
}

int main() {
    int run = 1, col = 40, lin = 12;
    clrscr();

    while (run) {
        gotoxy(col, lin);
        putchar(219);  // Imprime o caractere "bloco" (ASCII 219)

        int ch = 27; // 1º Byte de tecla especial
        ch = getch();  // Captura a tecla pressionada

        switch (ch) {
            case 72: if (lin > 1) lin--; break;  // Mover para cima
            case 80: if (lin < 24) lin++; break; // Mover para baixo
            case 77: if (col < 80) col++; break; // Mover para a direita
            case 75: if (col > 1) col--; break;  // Mover para a esquerda
            case 59: run = 0;  // Sair do programa
        }
    }

    clrscr();

    printf("Acabou!");
    return 0;
}
