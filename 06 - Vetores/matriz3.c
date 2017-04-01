#include <stdio.h>

int main(void) {
  int matriz[3][3], i, j, soma;
  
  // leitura da matriz
  for (i = 0; i < 3; ++i)
  {
    for (j = 0; j < 3; ++j)
    {
      printf("Informe matriz[%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
  
  // imprimir matriz
  for (i = 0; i < 3; ++i)
  {
    for (j = 0; j < 3; ++j)
    {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  
  // letra a
  for (i = 0, soma = 0; i < 3; ++i)
    soma += matriz[0][i];
  
  printf("Soma da primeira linha: %d\n", soma);
  
  // letra b
  for (i = 0, soma = 0; i < 3; ++i)
    soma += matriz[i][2];
    
  printf("Soma da terceira coluna: %d\n", soma);

  // letra c
  for (i = 0, soma = 0; i < 3; ++i)
    soma += matriz[i][i];
    
  printf("Soma da diagonal principal: %d\n", soma);
  
  return 0;
}