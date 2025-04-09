#include <stdio.h>

int calcula_um_dv(long long num, int num_digits) {
    long long temp_num = num;
    int soma = 0;
    int peso = 2;

    for (int i = 0; i < num_digits; i++) {
        int digito = 0;

        if (temp_num > 0) {
            digito = temp_num % 10;  
            temp_num /= 10;         
        }

        soma += digito * peso; 
        peso++;               
    }

    int resto = 11 - soma % 11;
    int dv_calculado;

    if (resto > 9) {
        dv_calculado = 0;
    } else {
        dv_calculado = resto;
    }

    return dv_calculado;
}

int valida_cpf(long long num, int dv) {

    int d1_calculado = calcula_um_dv(num, 9);

    long long base_para_d2 = num * 10 + d1_calculado;
    int d2_calculado = calcula_um_dv(base_para_d2, 10);

    int dv_calculado_final = d1_calculado * 10 + d2_calculado;


    if (dv_calculado_final == dv) {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
    int num;
    int dv;

    printf("Digite o numero do CPF completo: ");
    scanf("%d - %d", &num, &dv);

    int eh_valido = valida_cpf(num, dv);

    if (eh_valido) {
        printf("CPF valido!\n");
    } else {
        printf("CPF invalido!\n");
    }

    return 0;
}