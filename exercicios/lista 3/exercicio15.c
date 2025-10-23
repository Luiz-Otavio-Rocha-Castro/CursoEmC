#include <stdio.h>
#include <stdlib.h>
/*
15) Faça um programa que peça ao usuário dois números inteiros e apresente o resultado na
multiplicação entre os dois números sem utilizar a operação de multiplicação.
*/
int main(){
    int valor1, valor2,i, multi = 0;
    printf("Digite dois valores: ");
    scanf("%d%d",&valor1, &valor2);
    for (i = 1; i<=valor2; i++){
        multi += valor1;
    }
    printf("O valor da multiplicacao eh: %d\n", multi);
    return 0;
}
