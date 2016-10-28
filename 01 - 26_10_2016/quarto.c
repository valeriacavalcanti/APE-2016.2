#include <stdio.h>

int main(){
    int n1 = 15, n2 = 2, resultado_i;
    float resultado_f;

    resultado_i = n1 / n2;
    resultado_f = (float)n1 / n2;

    printf("%d\n", resultado_i);
    printf("%.0f\n", resultado_f);
    printf("%d\n", n1 / n2);
    printf("%f\n", (float)n1 / n2);

    return 0;
}
