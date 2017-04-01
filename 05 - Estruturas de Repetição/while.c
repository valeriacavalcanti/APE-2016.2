#include <stdio.h>

int main(){
  int qtde = 0, num, soma = 0;
  float media;
  
  printf("Informe um valor: ");
  scanf("%d", &num);
  
  while (num != 0){
    ++qtde;
    soma += num;
    
    printf("Informe um valor: ");
    scanf("%d", &num);
  }
  
  if (qtde > 0){
    media = (float)soma/qtde;
    
    printf("Soma = %d\n", soma);
    printf("Media = %.2f\n", media);
  }else{
    puts("Nenhum valor informado!");
  }
  
  return 0;
}