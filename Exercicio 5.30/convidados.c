#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char convidados[15][15];

void adicionarConvidado()
{
  char nome[15] = "";
  int convidado = 0;
  while(1 && convidado != 15)
  {
    printf("Digite o nome do %d convidado: ", convidado+1);
    scanf("%s", nome);
    if(nome[0] == '0')
      break;
    
    for(int i = 0; nome[i] != '\0'; i++)
      nome[i] = tolower(nome[i]);

    strcpy(convidados[convidado], nome);
    convidado++;
  }
}

int foiConvidado(char nome[15])
{
  for(int i = 0; nome[i] != '\0'; i++)
      nome[i] = tolower(nome[i]);

  for(int i = 0; i < 15; i++)
    if(strcmp(convidados[i], nome) == 0)
      return 1;
  return 0;
}

int main()
{
  adicionarConvidado();
  char nome[15];
  printf("Digite o nome que deseja saber se foi convidado: ");
  scanf("%s", nome);
  if(foiConvidado(nome))
    printf("%s foi convidado!", nome);
  else
    printf("%s nao foi convidado!", nome);
}