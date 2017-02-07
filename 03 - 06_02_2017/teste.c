#include <stdio.h>

int main(void) {
  int linha, coluna;
  
  printf("%c %d\n", 'A', 'A');
  printf("%c %d\n", 'A' + 1, 'A' + 1);
  
  printf("Informe o lugar: ");
  scanf("%c%d", &linha, &coluna);
  
  printf("%d %d", linha - 'A', coluna - 1);
  return 0;
}