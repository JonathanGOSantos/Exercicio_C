#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");

    float total = 0, valor_atual, desconto, valor_final;
    
    do {
        printf("Digite o valor: ");
        scanf("%f", &valor_atual);

        if(valor_atual<0) {
            continue;
        }
        total += valor_atual;
    } while(valor_atual >= 0);

    if (total < 50) {
        desconto = 0.05;
    } else if (total < 100) {
        desconto = 0.1;
    } else if (total < 200) {
        desconto = 0.15;
    } else {
        desconto = 0.2;
    }

    valor_final = total*(1-desconto);

    printf("\nTotal: %.2f \nDesconto: %.0f%% \nValor final: %.2f", total, desconto*100, valor_final);
}