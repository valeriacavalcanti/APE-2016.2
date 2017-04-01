#include <stdio.h>

int main(){
  int i, num[50], soma = 0;
  
  for (i = 0; i < 50; ++i){
    printf("Informe o %d valor: ", i + 1);
    scanf("%d", &num[i]);
    soma += num[i];
  }
  
  printf("Soma = %d\n", soma);
  
  return 0;
}