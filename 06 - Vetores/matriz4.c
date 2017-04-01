#include <stdio.h>

int main(void) {
  int matriz1[2][3], matriz2[2][3], matriz3[2][3], i, j;
  
  // ler a primeira matriz
  
  for (i = 0; i < 2; ++i)
  {
    for (j = 0; j < 3; ++j)
    {
      printf("Informe o %d %d elemento da matriz 1: ", i, j);
      scanf("%d", &matriz1[i][j]);
    }
  }
  
  // ler a segunda matriz
  
  for (i = 0; i < 2; ++i)
  {
    for (j = 0; j < 3; ++j)
    {
      printf("Informe o %d %d elemento da matriz 2: ", i, j);
      scanf("%d", &matriz2[i][j]);
    }
  }
  
  
  // somar as matrizes
  
  for (i = 0; i < 2; ++i)
  {
    for (j = 0; j < 3; ++j)
    {
      matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
      printf("%d ", matriz3[i][j]);
    }
    printf("\n");
  }  
  
  return 0;
}