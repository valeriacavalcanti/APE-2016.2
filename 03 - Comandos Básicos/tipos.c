#include <stdio.h>

int main(){
  int i;
  float f;
  char c;
  double d;
  long long ll;
  short int si;
  unsigned int ui;
  long double ld;
  
  printf("Informe um numero int: ");
  scanf("%d", &i);
  printf("Numero int: %d (%d bytes)\n", i, sizeof(i));
  
  printf("Informe um numero float: ");
  scanf("%f%*c", &f);
  printf("Numero float: %.2f (%d bytes)\n", f, sizeof(f));
  
  printf("Informe um caractere (char): ");
  scanf("%c", &c);
  printf("Caractere: %c (%d) (%d bytes)\n", c, c, sizeof(c));
  
  printf("Informe um numero double: ");
  scanf("%lf", &d);
  printf("Numero double: %lf (%d bytes)\n", d, sizeof(d));
  
  printf("Informe um numero long long: ");
  scanf("%lld", &ll);
  printf("Numero long long: %lld (%d bytes)\n", ll, sizeof(ll));
  
  printf("Informe um numero short int: ");
  scanf("%d", &si);
  printf("Numero short int: %d (%d bytes)\n", si, sizeof(si));
  
  printf("Informe um numero unsigned int: ");
  scanf("%d", &ui);
  printf("Numero unsigned int: %d (%d bytes)\n", ui, sizeof(ui));
  
  printf("Informe um numero long double: ");
  scanf("%llf", &ld);
  printf("Numero long double: %llf (%d bytes)\n", ld, sizeof(ld));
  
  return 0;
}