#include <stdio.h>

#define TAM 4

int main(void) {
  char playlist[TAM][51];
  int i, j;
  
  for (i = 0; i < TAM; ++i)
  {
    printf("Musica %d: ", i + 1);
    scanf("%[^\n]s", playlist[i]);
    getchar();
  }
  
  for (i = 0; i < TAM; ++i)
  {
    for (j = 0; playlist[i][j] != '\0'; ++j);
    printf("(%s) %d\n", playlist[i], j);
  }
  
  return 0;
}