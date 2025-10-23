#include <stdio.h>
#include <stdlib.h>
/*
1) Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário.
Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por
fim, imprima os dois vetores.

*/
int main()
{
    int i, valores[10], valores2[10];
    for (i = 0 ; i < 10; i++){
        printf("Informe o valor %d: ", i);
        scanf("%d", &valores[i]);
    }
    for (i = 0 ; i < 10; i++){
        valores2[i] = valores[i] * valores[i];
    }
    printf("Vetor 1: ");
    for (i = 0 ; i < 10; i++){

        printf("%d ", valores[i]);
    }
    printf("\nVetor 2: ");
    for(i = 0 ; i < 10; i++){
        printf("%d ", valores2[i]);
    }


    return 0;
}
