#include <stdio.h>
#include <stdlib.h>
/*
    6) Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere
    como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
    Dólares.


*/
int main(){
    float reais;
    printf("Digite um valor em Reais: R$");
    scanf("%f", &reais);
    printf("\nConvertendo seu dinheiro de reais para dolar ficou: US$%.2f\n", reais/5.3);


    return 0;
}
