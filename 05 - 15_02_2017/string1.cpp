#include <stdio.h>

int main(void) {
  char nome[51];
  int i;
  
  for (i = 1; i <= 3; ++i)
  {
    printf("Musica: ");
    scanf("%[^\n]s", nome);
    getchar();
    //gets(nome);
  }
  
  for (i = 0; nome[i] != '\0'; ++i);
  //{
  //  printf("%d %c\n", i, nome[i]);
  //}
  
  printf("(%s) - %d", nome, i);
  
  return 0;
}