#include <stdio.h>
#include <stdlib.h>

void gotoxy(int x, int y) {
    // Comando ANSI para mover o cursor para a posição (x, y)
    printf("\033[%d;%dH", y, x);
}

void freeman(int coord[], char code[])
{
    int x = coord[1], y = coord[1];
    int x_cache[100], y_cache[100];
    int coord_pos = 0;

    char ch;
    
    int i = 0;
    while (code[i] != '\0')
    {
        switch (code[i])
        {
        case '0':
            x++;
            ch = '-';
            break;
        case '1':
            x++;
            y++;
            ch = '\\';
            break;
        case '2':
            y++;
            ch = '|';
            break;
        case '3':
            x--;
            y++;
            ch = '/';
            break;
        case '4':
            x--;
            ch = '-';
            break;
        case '5':
            x--;
            y--;
            ch = '\\';
            break;
        case '6':
            y--;
            ch = '|';
            break;
        case '7':
            x++;
            y--;
            ch = '/';
            break;
        }

        gotoxy(x + 20, y + 10);
        putchar(ch);
        
        x_cache[coord_pos] = x;
        y_cache[coord_pos] = y;
        coord_pos++;
        i++;
    }
    
    x_cache[coord_pos] = x_cache[0];
    y_cache[coord_pos] = y_cache[0];
    gotoxy(1, y + 50);
}

int main()
{
    int coord[2];
    printf("Digite as coordenadas inicias da figura: ");
    scanf("%d,%d", &coord[0], &coord[1]);

    char code[100];
    printf("Digite a codificacao de Freeman: ");
    scanf("%s", &code);
    system("cls");
    freeman(coord, code);
}