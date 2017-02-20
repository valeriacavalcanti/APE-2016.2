#include <stdio.h>

int main(void) {
  int matriz[6][8], i, j;
  
  for (i = 0; i < 6; ++i){
    for (j = 0; j < 8; ++j){
      matriz[i][j] = i + j;
    }
  }
  
  for (i = 0; i < 6; ++i){
    for (j = 0; j < 8; ++j){
       printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}