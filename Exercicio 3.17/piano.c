#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>

int main() {
    system("cls");
    int run = 1;

    do {
        switch(toupper(getch())) {
            case 'A': 
                Beep(262, 700);
                break;
            case 'S': 
                Beep(294, 700);
                break;
            case 'D':
                Beep(330, 700);
                break;
            case 'F':
                Beep(349, 700);
                break;
            case 'J':
                Beep(392, 700);
                break;
            case 'K':
                Beep(440, 700);
                break;
            case 'L':
                Beep(494, 700);
                break;
            default:
                run = 0;
        }
    } while (run);
}