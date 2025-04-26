#include <stdio.h>

float freeman(char code[])
{
    float perimetro = 0;

    int chars = 0;
    while(code[chars] != '\0') chars++;
    
    int i;
    for(i = 0; i < chars; i++)
    {
        if(code[i] == '0' || code[i] == '2' || code[i] == '4' || code[i] == '6') perimetro += 1;
        else if(code[i] == '1' || code[i] == '3' || code[i] == '5' || code[i] == '7') perimetro += 1.42;
    }

    return perimetro;
}

int main()
{
    char code[100];
    printf("Digite a codificacao de Freeman: ");
    scanf("%s", &code);

    float perimetro = freeman(code);
    printf("Perimetro: %f", perimetro);
}