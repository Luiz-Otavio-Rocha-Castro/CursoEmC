#include <stdio.h>
#include <stdlib.h>
/*
    2) Escreva um procedimento que troca os valores dos parâmetros recebidos. Sua assinatura deve
ser: void troca(float *a, float *b);
*/

void troca(float *a, float *b){
    float aux;
    aux = *a;
    *a = *b;
    *b = aux;

}

int main(){
    float A = 10, B = 15;
    printf("Valores Antes da Troca\n\tA = %.2f e B = %.2f\n",A,B);
    troca(&A,&B);
    printf("Valores Depois da Troca\n\tA = %.2f e B = %.2f\n",A,B);
    return 0;
}
