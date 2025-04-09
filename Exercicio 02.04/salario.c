/* Exercício 2.4. Uma empresa determinou um reajuste salarial de 5% a todos os seus funcionários. Além disto, concedeu um abono de R$ 100,00 para aqueles que recebem até R$ 750,00. Dado o valor do salário de um funcionário, informar para quanto ele será reajustado. */

#include <stdlib.h>
#include <stdio.h>

int main() {
    system("cls");

    float salario_base, salario_reajustado, salario_final, reajuste, abono;

    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario_base);

    reajuste = 0.05;
    salario_reajustado = salario_base*(1+reajuste);

    if(salario_reajustado < 750.00) {
        abono = 100.00;
    }
    
    salario_final = salario_reajustado + abono;

    printf("O salário do funcionário agora é: %.2f", salario_final);
    return 0;
}