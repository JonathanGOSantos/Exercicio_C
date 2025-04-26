#include <stdio.h>

int strlen(char s[])
{
    int chars = 0;
    while(s[chars] != '\0') chars++;
    
    return chars;
}

int main()
{
    int chars = strlen("Jonathan");
    
    printf("Caracteres: %d", chars);
}