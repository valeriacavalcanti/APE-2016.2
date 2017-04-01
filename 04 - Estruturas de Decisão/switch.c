#include <stdio.h>

int main(){
  int num;
  
  printf("Informe um numero inteiro [0 .. 9]: ");
  scanf("%d", &num);
  
  switch(num){
    case 0: printf("zero\n"); break;
    case 1: printf("um\n"); break;
    case 2: printf("dois\n"); break;
    case 3: printf("tres\n"); break;
    case 4: printf("quatro\n"); break;
    case 5: printf("cinco\n"); break;
    case 6: printf("seis\n"); break;
    case 7: printf("sete\n"); break;
    case 8: printf("oito\n"); break;
    case 9: printf("nove\n"); break;
    default: printf("erro\n");
  }
  
  return 0;
}