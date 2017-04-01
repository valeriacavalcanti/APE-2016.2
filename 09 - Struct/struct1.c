#include <stdio.h>

typedef struct{
  int dia, mes, ano;
}Data;

typedef struct {
  char nome[100];
  Data nascimento;
  int sorte;
  float salario, doacao;
} Aluno;

int DataCmp(Data d1, Data d2);

int main(){
  // int i, numeros[10];
  // int aluno;
  Aluno a, v[10];
  Data data1, data2;
  
  data1.dia = 2;
  data1.mes = 1;
  data1.ano = 1;
  
  data2.dia = 1;
  data2.mes = 1;
  data2.ano = 1;
  
  printf("%d\n", DataCmp(data1, data2));
  
  printf("Informe o nome: ");
  gets(a.nome);
  
  printf("Informe o salario: ");
  scanf("%f", &a.salario);
  
  a.nascimento.dia = 18;
  a.nascimento.mes = 6;
  a.nascimento.ano = 2000;
  
  printf("%s - %.2f\n", a.nome, a.salario);
  
  v[0] = a;
  
  printf("%s - %.2f\n", v[0].nome, v[0].salario);
  
  return 0;
}


int DataCmp(Data d1, Data d2){
  if (d1.ano > d2.ano) return 1;
  else if (d1.ano < d2.ano) return -1;
  else if (d1.mes > d2.mes) return 1;
  else if (d1.mes < d2.mes) return -1;
  else if (d1.dia > d2.dia) return 1;
  else if (d1.dia < d2.dia) return -1;
  else return 0;
}