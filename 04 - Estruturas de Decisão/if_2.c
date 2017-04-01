#include <stdio.h>

int main(){
  int n1, n2, n3;
  
  printf("Informe tres numeros inteiros: ");
  scanf("%d %d %d", &n1, &n2, &n3);
  
  // verificar ordenação
  
  if ((n1 < n2) && (n1 < n3)){
    // n1 é o menor de todos
    if (n2 < n3){
      // n2 é o segundo menor
      printf("%d %d %d (%d %d %d)\n", n1, n2, n3, n1, n2, n3);
    }else{
      // n3 é o segundo menor
      printf("%d %d %d (%d %d %d)\n", n1, n3, n2, n1, n2, n3);
    }
  }else{
    // n1 não é o menor de todos
    if (n2 < n3){
      // n2 é o menor de todos
      if (n1 < n3){
        // n1 é o segundo menor
        printf("%d %d %d (%d %d %d)\n", n2, n1, n3, n1, n2, n3);
      }else{
        // n3 é o segundo menor
        printf("%d %d %d (%d %d %d)\n", n2, n3, n1, n1, n2, n3);
      }
    }else{
      // n3 é o menor de todos
      if (n1 < n2){
        // n1 é o segundo menor
        printf("%d %d %d (%d %d %d)\n", n3, n1, n2, n1, n2, n3);
      }else{
        // n2 é o segundo menor
        printf("%d %d %d (%d %d %d)\n", n3, n2, n1, n1, n2, n3);
      }
    }
  }
  
  return 0;
}