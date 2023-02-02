#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char palavra[30], copia[30];
  int i, tam, iguais = 0;

  printf("Digite uma palavra  :");
  scanf("%s", palavra);
  tam = strlen(palavra);
  for (i = 0; i < strlen(palavra); i++)
  {
    copia[i] = palavra[tam - 1];
    tam--;
  }
  copia[i] = '\0';
  tam = strlen(palavra);
  for (i = 0; i < tam; i++)
  {
    if (palavra[i] == copia[i])
    {
      iguais++;
    }
  }

  if (tam == iguais)
  {
    printf("\n Eh palindroma");
  }
  else
  {
    printf("\nNão eh palindroma");
  }
  return 0;
}