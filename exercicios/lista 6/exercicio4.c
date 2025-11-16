#include <stdio.h>
#include <stdlib.h>

/*
    4) Considere a seguinte declaração: int A, *B, **C, ***D
Escreva um programa que leia a variável A e calcule e exiba o dobro, o triplo e o quádruplo desse
valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C
o triplo e D o quádruplo.
*/
int main(){
    int A, *B, **C, ***D;
    printf("Informe um valor: ");
    scanf("%d", &A);
    B = &A;
    C = &B;
    D = &C;

    printf("Valor: %d\nDobro: %d\nTriplo: %d\nQuadruplo: %d\n", A, *B*2,**C*3,***D*4);


    return 0;
}
