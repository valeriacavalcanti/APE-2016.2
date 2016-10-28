#include <stdio.h>

int main(){
    int media = 10;

    if (media >= 70){
        puts("Aprovado!");
        puts("que bom!");
    }else{
        if (media >= 40){
            puts("Final!");
            puts("eita");
        }else{
            puts("Reprovado");
            puts("lascou");
        }
    }

    return 0;
}
