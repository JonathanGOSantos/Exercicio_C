#include <stdio.h>
#include <ctype.h>

int strlen(char s[])
{
    int chars = 0;
    while(s[chars] != '\0') chars++;
    return chars;
}

void strupr(char s[])
{
    printf("%s -> ", s);
    int len = strlen(s);
    
    int i;
    for(i = 0; i < len; i++) 
    {
        s[i] = toupper(s[i]);   
    }
    printf("%s", s);
}

int main()
{
    char str[] = "Jonathan";
    strupr(str);
}