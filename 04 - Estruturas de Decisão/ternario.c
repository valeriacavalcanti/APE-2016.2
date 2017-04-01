#include <stdio.h>

int main(){
  int n1, n2;
  
  printf("Informe dois numeros: ");
  scanf("%d %d", &n1, &n2);
  
  printf("Maior: %d\n", (n1 > n2)?(n1):(n2));
  
  (n1 > n2)?(printf("Maior: %d\n", n1)):(printf("Maior: %d\n", n2));
  
  return 0;
}