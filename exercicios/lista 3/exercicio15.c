#include <stdio.h>
#include <stdlib.h>
/*
15) Fa�a um programa que pe�a ao usu�rio dois n�meros inteiros e apresente o resultado na
multiplica��o entre os dois n�meros sem utilizar a opera��o de multiplica��o.
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
