#include <stdio.h>
#include <stdlib.h>
/*
6) Faça um programa que imprima na tela todos os múltiplos de 7 entre 1 e 9999.
*/
int main(){
    int i;
    printf("Os multiplos de 7 sao: \n");
    for(i=7; i<10000; i+=7){
        printf("%4d ", i);
    }

    return 0;
}
