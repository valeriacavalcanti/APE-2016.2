#include <stdio.h>
#include <string.h>

int main(){
    char frase[] = "eu adoro";
    int i, vetor[] = {10, 20, 30, 40};

    printf("char = %d\n", sizeof(char));
    printf("int = %d\n", sizeof(int));

    for (i = 0; frase[i] != '\0'; ++i)
    {
        printf("[%d] %c %d %d %d\n", i, frase[i], frase[i], frase, frase + i);
    }

    for (i = 0; i < 4; ++i)
    {
        printf("[%d] %d %d %d %d\n", i, vetor[i], vetor, vetor + i, &vetor[i]);
    }


    return 0;
}
