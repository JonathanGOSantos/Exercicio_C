#include <stdio.h>

int resto(int d, int dv) 
{
  if(d-dv < 0) return d;
  d -= dv;
  return resto(d, dv);
}

int main() {
  int d, dv;
  printf("Digite a divisão: ");
  scanf("%d / %d", &d, &dv);

  printf("%d", resto(d, dv));
}