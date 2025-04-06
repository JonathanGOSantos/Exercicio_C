/* 
Exercício 2.10. Dados a altura e o sexo de uma pessoa, determine seu peso ideal de acordo com as fórmulas a seguir:
    - para homens o peso ideal é 72.7∗altura − 58
    - para mulheres o peso ideal é 62.1∗altura − 44.7 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char sexo;
    float altura, peso_ideal;

    printf("Digite seu sexo (f/m) e altura: ");
    scanf("%c %f", &sexo, &altura);

    switch(sexo) {
        case 'f': peso_ideal = 62.1*altura-58;
        case 'm': peso_ideal = 72.7*altura-58;
    }

    printf("Peso ideal: %.2f", peso_ideal);

    return 0;
}