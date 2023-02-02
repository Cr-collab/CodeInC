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
  tam--;

  i = 0;

  while (tam >= i)
  {
    printf("%d >= %d\n", tam, i);
    printf("%c != %c\n", palavra[i], palavra[tam]);
    if (palavra[i] != palavra[tam])
    {
      iguais++;
    }
    printf("%d\n", iguais);
    i++;
    tam--;
  }

  if (iguais != 0)
  {
    printf("\n Não eh palidroma");
  }
  else
  {
    printf("\n  eh palidroma");
  }

  return 0;
}