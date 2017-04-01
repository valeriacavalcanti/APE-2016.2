#include <stdio.h>

int main(){
  int i, num[10], soma = 0, qtde_acima = 0;
  float media;
  
  for (i = 0; i < 10; ++i){
    printf("Informe o %d valor: ", i + 1);
    scanf("%d", &num[i]);
    soma += num[i];
  }
  
  media = (float)soma / 10;
  
  printf("Soma = %d\n", soma);
  printf("Media = %.2f\n", media);
  
  for (i = 0; i < 10; ++i){
    if (num[i] > media){
      ++qtde_acima;
    }
  }
  
  printf("Valores informados: ");
  for (i = 0; i < 10; ++i){
    printf("%d ", num[i]);
  }
  
  printf("\nQtde de valores acima da media = %d\n", qtde_acima);
  
  printf("Valores acima da media: ");
  
  for (i = 0; i < 10; ++i){
    if (num[i] > media){
      printf("%d ", num[i]);
    }
  }
  
  printf("\n");
  
  return 0;
}