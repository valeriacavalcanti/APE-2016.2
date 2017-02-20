#include <stdio.h>

#define TAM 3

int main(void) {
  int matriz[TAM][5], i, j, soma, qtde = 0;
  
  for (i = 0; i < TAM; ++i)
  {
    printf("Aluno: %d\n", i + 1);
    
    printf("Informe a matricula: ");
    scanf("%d", &matriz[i][0]);
    
    soma = 0;
    for (j = 1; j <= 3; ++j)
    {
      printf("Nota %d: ", j);
      scanf("%d", &matriz[i][j]);
      soma += matriz[i][j];
    } // for j
    
    matriz[i][4] = soma/3;
  } // for i
  
  for (i = 0; i < TAM; ++i)
  {
    for (j = 0; j < 5; ++j)
    {
      printf("%d ", matriz[i][j]);
    } // for j
    printf("\n");
  } // for i
  
  for (i = 0; i < TAM; ++i)
  {
    printf("%d %d ", matriz[i][0], matriz[i][4]);
    
    if (matriz[i][4] >= 70)
    {
      printf("Aprovado\n");
      ++qtde;
    } // if
    else
      printf("Reprovado\n");
  } // for i
  
  printf("Quantidade aprovados: %d\n", qtde);
  
  return 0;
} // main