#include <stdio.h>

int quociente(int d, int dv) 
{
  static int q = 0;
  if(d-dv < 0) return q;
  d -= dv;
  q++;
  return quociente(d, dv);
}

int main() {
  int d, dv;
  printf("Digite a divisão: ");
  scanf("%d / %d", &d, &dv);

  printf("%d", quociente(d, dv));
}