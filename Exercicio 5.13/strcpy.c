#include <stdio.h>

void strcpy(char s[], char t[])
{
    int i;
    for (i = 0; i < 100; i++) s[i] = t[i];

    printf("s: %s", s);
}

int main()
{
    char s[100];
    strcpy(s, "Teste");
}