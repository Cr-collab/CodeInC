#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int tam = 4;
  int matriz[tam][tam];

  srand(time(NULL));
  // gerando matriz
  for (int i = 0; i < tam; i++)
  {
    for (int j = 0; j < tam; j++)
    {
      matriz[i][j] = rand() % 100;
    }
  }
  // mostrndo matriz é gerada
  for (int i = 0; i < tam; i++)
  {
    for (int j = 0; j < tam; j++)
    {
      printf("%2d | ", matriz[i][j]);
    }
    printf("\n\n");
  }

  // printando diagonal abaixo da principal

  for (int i = 0; i < tam; i++)
  {
    for (int j = 0; j < tam; j++)
    {
      if (i > j)
      {

        printf("%2d | ", matriz[i][j]);
      }
      else
      {
        printf("|__| ");
      }
    }
    printf("\n\n");
  }
  return 0;
}