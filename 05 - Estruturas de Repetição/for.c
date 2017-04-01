#include <stdio.h>

int main(){
  int i, num, soma = 0;
  float media;
  
  for (i = 0; i < 10; ++i){
    printf("Informe o %d valor: ", i + 1);
    scanf("%d", &num);
    soma += num;
  }
  
  media = (float)soma / 10;
  
  printf("Soma = %d\n", soma);
  printf("Media = %.2f\n", media);
  
  return 0;
}