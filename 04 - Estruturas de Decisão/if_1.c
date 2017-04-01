#include <stdio.h>

int main(){
  int dia, mes, ano, idade;
  
  printf("Informe a data de nascimento: ");
  scanf("%d/%d/%d", &dia, &mes, &ano);
  
  // considerando a data: 26/10/2016
  if ((mes < 10) || ((mes == 10) && (dia <= 26))){
    idade = 2016 - ano;
  }else{
    idade = 2016 - ano - 1;
  }
  
  printf("Idade = %d\n", idade);
  
  return 0;
}