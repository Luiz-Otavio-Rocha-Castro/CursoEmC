#include <stdio.h>
#include <stdlib.h>
/*
9) Fa�a um programa que calcule o valor de A, dado por:
A = 1 + 2 + 3 + 4 + ... + n, onde n � um n�mero inteiro, maior que zero informado pelo usu�rio.

*/
int main(){
    int n, i, A = 0;
    printf("Digite um valor maior que zero: ");
    scanf("%d", &n);
    while(n<=0){
        printf("O valor nao eh maior que zero\nInforme outro valor: ");
        scanf("%d", &n);
    }
    for (i = 1; i <= n; i++){
        A += i;
    }
    printf("O valor de A = %d\n", A);
    return 0;
}
