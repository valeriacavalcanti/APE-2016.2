#include <stdio.h>

int main(void) {
  int vetor_uni[4];
  int vetor_bidi[6][10];
  int i, j, linha, coluna;
  
  // gravar zero em todos os elementos
  for (i = 0; i < 6; ++i)
  {
    for (j = 0; j < 10; ++j)
    {
      vetor_bidi[i][j] = 0;
    }
  }
  
  // imprimir posição (numérica)
  for (i = 0; i < 6; ++i)
  {
    for (j = 0; j < 10; ++j)
    {
      printf("%d(%d %d) ", vetor_bidi[i][j], i, j);
    }
    printf("\n");
  }
  
  // imprimir posição (alfanumérica)
  for (i = 0; i < 6; ++i)
  {
    for (j = 0; j < 10; ++j)
    {
      printf("%d(%c%d) ", vetor_bidi[i][j], 'A'+i, j+1);
    }
    printf("\n");
  }
  
  printf("Informe linha e coluna: ");
  scanf("%d %d", &linha, &coluna);
  
  if (vetor_bidi[linha][coluna] == 0)
  {
    puts("Vendido!");
    vetor_bidi[linha][coluna] = 1;
  }
  else
    puts("Nao disponivel");
  
  // imprimir
  for (i = 0; i < 6; ++i)
  {
    for (j = 0; j < 10; ++j)
    {
      printf("%d(%d %d) ", vetor_bidi[i][j], i, j);
    }
    printf("\n");
  }
  
  return 0;
}