#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
    3) Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma
    variável auxiliar.

*/
int main(){
    setlocale(LC_ALL,"Portuguese");
    int a,b;
    printf("Digite dois números inteiros: ");
    scanf("%d%d", &a, &b);
    printf("Valores lidos: A = %d e B = %d\n", a,b);
    a = b + a;
    b = a - b;
    a = a - b;
    printf("O valor das variaveis ao fazer troca ficou: A = %d e B = %d\n", a,b);

    return 0;
}
