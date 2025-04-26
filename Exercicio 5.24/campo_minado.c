#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOMB 15
#define NOT_BOMB -1
#define VIEW 254

#define CANTO_SUPERIOR_ESQUERDO 201
#define CANTO_INFERIOR_ESQUERDO 200
#define CANTO_SUPERIOR_DIREITO 187
#define CANTO_INFERIOR_DIREITO 188
#define LINHA_HORIZONTAL 205
#define LINHA_VERTICAL 186

int campoMinado(int campo[10][10], int dificuldade)
{
  int chance;
  int bombs = 0;
  int bombs_limit, line_limit;
  
  switch (dificuldade)
  {
    case 1:
    bombs_limit = 8;
    line_limit = 1;
    break;
    case 2:
    bombs_limit = 16;
    line_limit = 2;
    break;
    case 3:
    bombs_limit = 24;
    line_limit = 3;
    break;
    
    default:
    break;
  }
  chance = bombs_limit*100/64;
  
  for(int l = 0; l < 10; l++)
  {
    int line_bombs = 0;
    for(int c = 0; c < 10; c++)
    {
      int value;
      if(l == 0 || l == 9 || c == 0 || c == 9)
      {
        if(l == 0 && c == 0) 
            value = CANTO_SUPERIOR_ESQUERDO;
        else if(l == 0 && c == 9) 
            value = CANTO_SUPERIOR_DIREITO;
        else if(l == 9 && c == 0) 
            value = CANTO_INFERIOR_ESQUERDO;
        else if(l == 9 && c == 9) 
            value = CANTO_INFERIOR_DIREITO;
        else if(l == 0 || l == 9) 
            value = LINHA_HORIZONTAL;
        else if(c == 0 || c == 9) 
            value = LINHA_VERTICAL;
      }
      else if (rand()%100 < chance && bombs < bombs_limit && line_bombs < line_limit)
      {
        value = BOMB;
        bombs++;
        line_bombs++;
      }
      else
      {
        value = NOT_BOMB;
      }

      campo[l][c] = value;
    }
  }
  return bombs;
}

int calculaBombas(int campo[10][10], int pos[2])
{
  int bombs = 0;
  int x = pos[0];
  int y = pos[1];
  for(int l = -1; l <= 1; l++)
  {
    for(int c = -1; c <= 1; c++)
    {
      if(l == 0 && c == 0) continue;
      if(campo[x+l][y+c] == BOMB) bombs++;
    }
  }
  return bombs;
}

void revelarCadeia(int campo[10][10], int x, int y, int *reveladas) {
  if (x < 1 || x > 8 || y < 1 || y > 8 || campo[x][y] != NOT_BOMB) {
      return; // Fora dos limites ou já revelado
  }

  int bombasVizinhas = calculaBombas(campo, (int[]){x, y});
  campo[x][y] = bombasVizinhas;
  (*reveladas)++;

  if (bombasVizinhas == 0) {
      for (int l = -1; l <= 1; l ++) {
          for (int c = -1; c <= 1; c++) {
                revelarCadeia(campo, x + l, y + c, reveladas);
          }
      }
  }
  reveladas++;
}

void exibeCampoMinado(int campo[10][10], int final)
{
  for(int l = -1; l < 10; l++)
  {
    for(int c = -1; c < 10; c ++)
    {
      if(l < 0) // Faz a numeração das colunas
      {
        if(c < 0)
          printf("    ");
        else if(c < 8)
          printf("%d ", c+1);
        continue;
      }

      if(c < 0) // Faz a numeração das linhas
      {
        if(l < 1 || l > 8)
          printf("  ");
        else if(l <= 8) 
          printf("%d ", l);
        continue;
      }

      int value1 = campo[l][c];
      int value2 = 32;
      
      if(value1 == LINHA_HORIZONTAL || value1 == CANTO_SUPERIOR_ESQUERDO || value1 == CANTO_INFERIOR_ESQUERDO)
        value2 = LINHA_HORIZONTAL;

      if(value1 == NOT_BOMB) 
        value1 = VIEW;
      else if(value1 <= 8) 
        value1 += 48;
      
      if(value1 == BOMB && !final)
        value1 = VIEW;

      printf("%c%c", value1, value2);
    }
    printf("\n");
  }
  printf("---------------------\n");
}

int jogar(int campo[10][10], int pos[2], int bombs, int *reveladas) {
  int x = pos[0];
  int y = pos[1];

  if (!pos || x < 1 || x > 8 || y < 1 || y > 8) {
      return -1;
  }

  if (campo[x][y] == NOT_BOMB) {
      revelarCadeia(campo, x, y, reveladas);
  }

  exibeCampoMinado(campo, 0);
  if(campo[x][y] == BOMB) return 0;
  if(64 - bombs == *reveladas) return 99;
  return 1;
}

int main()
{
  srand(time(NULL));
  int dificuldade;
  do 
  {
    printf("---------------------------------------------\n");
    printf("---------| Selecao de dificuldade |----------\n");
    printf("---------|       [1] - Facil      |----------\n");
    printf("---------|       [2] - Medio      |----------\n");
    printf("---------|      [3] - Dificil     |----------\n");
    printf("---------------------------------------------\n");
    printf("Selecione a dificuldade: ");
    scanf("%d", &dificuldade);
    system("cls");
  } while(dificuldade != 1 && dificuldade != 2 && dificuldade != 3);
  
  int campo[10][10]; // Definição Inicial do Campo Minado
  int bombs = campoMinado(campo, dificuldade);
  int reveladas = 0;
  exibeCampoMinado(campo, 0);

  int pos[2];
  int result;
  
  do {
    printf("Digite as posicao que quer abrir: ");
    scanf("%d, %d", &pos[0], &pos[1]);
    printf("-----------------------\n");
  
    result = jogar(campo, pos, bombs, &reveladas);
  } while(result && result != 99);
  
  system("cls");
  exibeCampoMinado(campo, 1);
  
  if(!result)
    printf("Voce perdeu!");
  else
    printf("Voce ganhou!");
}