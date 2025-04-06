#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

void gotoxy(int x, int y) {
    // Comando ANSI para mover o cursor para a posição (x, y)
    printf("\033[%d;%dH", y, x);
}

int main() {
    int run = 1, rastro = 1, block = 219, cor;
    int col = 40, lin = 12;

    system("cls");

    printf("\033[?25l"); // Remove o cursor
    while (run) {
        gotoxy(col, lin);
        if(rastro) {
            putchar(block);  // Imprime o caractere "bloco" (ASCII 219)
        }

        int ch = 27; // 1º Byte de tecla especial
        ch = getch();  // Captura a tecla pressionada

        switch (ch) {
            case 72: if (lin > 1) lin--; break;  // Mover para cima
            case 80: if (lin < 24) lin++; break; // Mover para baixo
            case 77: if (col < 80) col++; break; // Mover para a direita
            case 75: if (col > 1) col--; break;  // Mover para a esquerda
            case 59: if (rastro) {
                         rastro = 0; 
                         printf("\033[?25h"); // Exibe o cursor
                     } else {
                         rastro = 1;
                         printf("\033[?25l"); // Remove o cursor
                     } break;
            case 60: putchar(32); break;
            case 62: cor = getch();
                     switch(cor) {
                        case 49: printf("\033[0m");  break;
                        case 50: printf("\033[34m"); break;
                        case 51: printf("\033[32m"); break;
                        case 52: printf("\033[31m"); break;
                        case 53: printf("\033[33m"); break; 
                     } 
                     break;
            case 63: run = 0; break; // Sair do programa
        }
    }

    system("cls");

    printf("Acabou!");
    return 0;
}
