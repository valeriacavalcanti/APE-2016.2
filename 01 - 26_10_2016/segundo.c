#include <stdio.h>

int main(){
    int dia, mes, ano;

    printf("Informe uma data (ddmmaaaa): ");
    scanf("%2d%2d%4d", &dia, &mes, &ano);

    printf("%-6d/%-6d/%-6d", dia, mes, ano);

    return 0;
}
