#include <stdio.h>

typedef struct{
  char nome[20];
  int idade;
}Pessoa;

int PessoaCmp(Pessoa p1, Pessoa p2);
void TrocaPessoa(Pessoa *p1, Pessoa *p2);
void PrintVetorPessoa(Pessoa v[], int qtde);

int main(){
  Pessoa vetor[4], aux;
  int i, troca;
  
  for (i = 0; i < 4; ++i){
    printf("Informe o nome: ");
    gets(vetor[i].nome);
    printf("Informe a idade: ");
    scanf("%d%*c", &vetor[i].idade);
  }
  
  PrintVetorPessoa(vetor, 4);
  
  // bolha
  do{
    troca = 0;
    for (i = 0; i < 3; ++i){
      if (PessoaCmp(vetor[i], vetor[i + 1]) > 0){
        TrocaPessoa(&vetor[i], &vetor[i+1]);
        troca = 1;
      }
    }
  }while (troca == 1);
  
  PrintVetorPessoa(vetor, 4);
  
  return 0;
}


int PessoaCmp(Pessoa p1, Pessoa p2){
  if (p1.idade < p2.idade) return -1;
  else if (p1.idade > p2.idade) return 1;
  else return 0;
}

void TrocaPessoa(Pessoa *p1, Pessoa *p2){
  Pessoa aux = *p1;
  *p1 = *p2;
  *p2 = aux;
}

void PrintVetorPessoa(Pessoa v[], int qtde){
  int i;
  for (i = 0; i < qtde; ++i){
    printf("%s - %d\n", v[i].nome, v[i].idade);
  }
}