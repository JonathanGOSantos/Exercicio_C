#include <stdio.h>
#include <math.h>

double freeman(int coord[], char code[])
{
    double area = 0;

    int x = 5, y = 10;
    int x_cache[100], y_cache[100];

    int coord_pos = 0;

    int i = 0;

    while (code[i] != '\0')
    {
        switch (code[i])
        {
        case '0':
            x++;
            break;
        case '1':
            x++;
            y++;

            break;
        case '2':

            y++;

            break;
        case '3':

            x--;
            y++;

            break;
        case '4':

            x--;

            break;
        case '5':

            x--;
            y--;

            break;
        case '6':
            y--;

            break;
        case '7':
            x++;
            y--;
            break;
        }
        x_cache[coord_pos] = x;
        y_cache[coord_pos] = y;
        coord_pos++;
        i++;
    }

    x_cache[coord_pos] = x_cache[0];
    y_cache[coord_pos] = y_cache[0];
    coord_pos++;

    int j;
    for (j = 0; j < coord_pos - 1; j++)
    {

        area += (x_cache[j] * y_cache[j + 1]) - (x_cache[j + 1] * (y_cache[j]));
    }
    return fabs(area) * 0.5;
}

int main()
{
    int coord[2];
    printf("Digite as coordenadas inicias da figura: ");
    scanf("%d,%d", &coord[0], &coord[1]);

    char code[100];
    printf("Digite a codificacao de Freeman: ");
    scanf("%s", &code);

    double area = freeman(coord, code);
    printf("Area: %f", area);
}