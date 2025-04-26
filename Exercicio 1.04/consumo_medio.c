#include <stdio.h>
#include <stdlib.h>

int main() {
  system("clear");

  float distancia, consumo, consumo_medio;

  printf("Digite qual a distância percorrida: (Em km) ");
  scanf("%f", &distancia);

  printf("Digite quantos litros de gasolina foram gastos para percorrer %.2f km ", distancia);
  scanf("%f", &consumo);

  consumo_medio = distancia/consumo;

  printf("O consumo foi de %.2f km/l", consumo_medio);

  return 0;
}