#include <stdio.h>

int soma(int n1, int n2);
int multiplica(int n1, int n2);
int wilson(int op, int n1, int n2);
int divisores(int num);

int main(){
  int num1 = 10, num2 = 20;
  int r;
  
  r = soma(num1, num2);
  printf("Soma = %d\n", r);
  printf("Num1 = %d\n", num1);
  
  printf("Multip: %d\n", multiplica(2, 4));
  
  printf("Resultado: %d\n", wilson(1, 2, 6));
  printf("Resultado: %d\n", wilson(2, 2, 6));
  
  printf("Qtde div: %d\n", divisores(6));

  return 0;
}

// funções
int soma(int n1, int n2){
  int r;
  r = n1 + n2;
  n1 = 100;
  //printf("Num1 = %d\n", n1);
  return r;
}

int multiplica(int n1, int n2){
  return n1 * n2;
}

int wilson(int op, int n1, int n2){
  if (op == 1) 
    return soma(n1, n2);
  else
    return multiplica(n1, n2);
}

int divisores(int num){
  int i, qtde = 0;
  for (i = 1; i <= num/2; ++i)
    if (num % i == 0)
      ++qtde;
      
  return qtde + 1;
}