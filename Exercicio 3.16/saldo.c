#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");

    float saldo_inicial, operacao, credito = 0, debito = 0, cpmf = 0, saldo_final = 0;

    printf("Digite o saldo: ");
    scanf("%f", &saldo_inicial);

    do {
        printf("Digite a operacao: ");
        scanf("%f", &operacao);

        if(operacao < 0) {
            debito -= operacao;
        } else if(operacao > 0) {
            credito += operacao;
        }

    } while(operacao != 0);

    cpmf = debito*(0.0035);
    saldo_final = saldo_inicial + credito - debito - cpmf;
    printf("\n");
    printf("Total de creditos ...: R$ %05.2f", credito);
    printf("\n");
    printf("Total de debitos ....: R$ %05.2f", debito);
    printf("\n");
    printf("C.P.M.F paga ........: R$ %05.2f", cpmf);
    printf("\n");
    printf("Saldo final .........: R$ %05.2f", saldo_final);
}