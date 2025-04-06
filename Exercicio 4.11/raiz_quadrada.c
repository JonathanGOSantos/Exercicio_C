#include <stdio.h>
#include <stdlib.h>

#define modulo(x) ((x) < 0 ? -(x) : (x))

float raiz_quadrada(int num) {
    double raiz = 1, resultado;

    do {
        resultado = modulo(((raiz*raiz) - num));
        if(resultado < 0.001) break;    
        raiz = (((raiz*raiz)+num)/(2*raiz));
    } while(resultado > 0.001);

    return raiz;
}

int main() {
    system("cls");
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Raiz quadrada de %d: %f", num, raiz_quadrada(num));

    return 0;
}