#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    system("cls");
    int a, b, c, delta;
    float x1, x2;

    printf("Digite os argumentos da equação (a b c): ");
    scanf("%d %d %d", &a, &b, &c);

    if (a) {
        delta = (b*b)-4*a*c;

        x1 = (-b+sqrt(delta))/(2*a);
        x2 = (-b-sqrt(delta))/(2*a);
    }

    printf("x1: %f \n x2: %f \n", x1, x2);
    return 0;
}