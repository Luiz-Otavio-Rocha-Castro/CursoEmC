#include <stdio.h>
#include <stdlib.h>
    /*
    1) Escrever um programa para pedir ao usuário seu sexo, sua idade,
    seu peso e sua altura.
    Ler estas informações e imprimir na tela.
    */

int main(){
    char sexo;
    int idade;
    float peso, altura;
    printf("Me informe sua idade, seu peso,  sua altura e seu sexo: (M,m,F,f),\n");
    scanf("%d%f%f %c",&idade, &peso, &altura, &sexo);
    // tome cuidado com o buffer do teclado => uma região especial de memória, se ele ocorrer coloque um espaço antes do %c
    //fflush() nao use esse comando para limpar o buffer, ele so funciona no WINDOWS
    printf("Seu sexo: %c\nSua idade: %d\nSua altura:%.2fm\nSeu peso:%.2fkg", sexo,idade, altura, peso);
    return 0;
}
