#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
    3) Fa�a um programa em C para trocar o valor de duas vari�veis inteiras sem utilizar nenhuma
    vari�vel auxiliar.

*/
int main(){
    setlocale(LC_ALL,"Portuguese");
    int a,b;
    printf("Digite dois n�meros inteiros: ");
    scanf("%d%d", &a, &b);
    printf("Valores lidos: A = %d e B = %d\n", a,b);
    a = b + a;
    b = a - b;
    a = a - b;
    printf("O valor das variaveis ao fazer troca ficou: A = %d e B = %d\n", a,b);

    return 0;
}
