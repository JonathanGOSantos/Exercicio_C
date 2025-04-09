*Exercício 1.2.* Descubra os erros no programa a seguir:

```
/* PERIM.C - informa o perímetro de uma circunferência /*
#include <studio.h>
#define PI = 3.1415
Main() {
  float raio;
  
  printf("\n Qual a medida do raio? ");   /* solicita o raio
  scanf("%f, &raio);                      da circunferência */

  float perim;                            /* calcula o seu
  perim := 2*PI*raio;                     perímetro */
  printf("\n O perímetro é %f", perim);

  getch;
}
```