#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");

    int n, conta, digitoVerificador = 0;

    printf("Digite o número da conta: ");
    scanf("%d", &conta);
    n = conta;

    while (n != 0) {
        digitoVerificador += n % 10;
        n /= 10;
    }

    digitoVerificador %= 10;

    printf("Número da conta completo: %06d-%d", conta, digitoVerificador);

    return 0;
}