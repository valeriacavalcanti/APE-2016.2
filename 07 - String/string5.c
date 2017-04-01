#include <stdio.h>
#include <string.h>

int main(){
    char frase[] = "eu adoro";

    printf("%d %d %d %d\n", strchr(frase, ' '), &frase[2], strchr(frase, ' ') - frase, frase);

    return 0;
}