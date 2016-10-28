#include <stdio.h>

int main(){
    int dia, mes, ano;

    printf("Data = %d/%d/%d\n", dia, mes, ano);

    printf("Informe uma data (dd/mm/aaaa): ");
    scanf("%d%*c%d%*c%d", &dia, &mes, &ano);

    printf("Data = %d/%d/%d\n", dia, mes, ano);
    printf("Que bom!");
    return 0;
}
