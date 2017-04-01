#include <stdio.h>
#include <string.h>

int main(){
    char frase[100];

    printf("Informe uma frase: ");
    scanf("%[^\n]s", frase);

    printf("(%s)", frase);

    if (strchr("aeiou", frase[0]) != NULL)
        puts("vogal");
    else
        puts("nao vogal");

    return 0;
}