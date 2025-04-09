#include <stdio.h>
#include "boolean.h"

/* O C por padrão não reconhece os tipos false e true, por isso tive que definir ele no "boolean.h"*/

int main() {
    printf("%s ", bool(not false));
    printf("%s ", bool(false and true));
    printf("%s ", bool(true or false));
}