#include <stdio.h>

int main(){
  int num, qtde = 0;
  
  do{
    ++qtde;
    printf("Informe um valor positivo: ");
    scanf("%d", &num);
  }while (num <= 0);
  
  printf("Quantidade de Tentativas: %d\n", qtde);
  printf("Valor positivo: %d\n", num);
  
  return 0;
}