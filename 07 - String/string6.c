#include <stdio.h>
#include <string.h>

int main(){
    char frase[] = "       eu      adoro     algoritmo    e   C      ";
    int i;

    while (strstr(frase, "  ") != NULL)
    {
        for (i = strstr(frase, "  ") - frase; frase[i] != '\0'; i++)
        {
            frase[i] = frase[i + 1];
        }
    }

    if (frase[0] == ' ')
        for (i = 0; frase[i] != '\0'; i++)
            frase[i] = frase[i + 1];

    if (frase[strlen(frase) - 1] == ' ')
        frase[strlen(frase) - 1] = '\0';

    printf("(%s)\n", frase);

    return 0;
}