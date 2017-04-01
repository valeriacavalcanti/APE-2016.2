#include <stdio.h>

int main(void) {
  int matriz[2][3], i, j, soma = 0;
  
  for (i = 0; i < 2; ++i){
    for (j = 0; j < 3; ++j){
      printf("Informe o valor do indice [%d][%d]: ", i + 1, j + 1);
      scanf("%d", &matriz[i][j]);
      soma += matriz[i][j];
    }
  }
  
  printf("Soma = %d\n", soma);
  
  return 0;
}