#include <stdio.h>
#include <stdlib.h>
/*
4) Crie um programa que permita ao usuário escolher entre fazer a conversão de Real para Dólar ou
de Dólar para Real. Utilize como taxa de câmbio $1 igual a R$5.30.
*/

int main(){
    int opc;
    float dinheiro;
    printf("Escolha uma opcao de conversao\n1) dolar => real\n2) real => dolar\nDigite uma opcao: ");
    scanf("%d", &opc);
    switch (opc){
    case 1:
        printf("Digite quantos dolar voce quer converter: ");
        scanf("%f", &dinheiro);
        printf("Seu dinheiro em reais ficou: R$%.2f\n", dinheiro* 5.30);
        break;
    case 2:
        printf("Digite quantos reais voce quer converter: ");
        scanf("%f", &dinheiro);
        printf("Seu dinheiro em dolar ficou: U$%.2f\n", dinheiro/5.30);
        break;
    default:
        printf("Nenhuma opcao escolhida\n");
    }
    return 0;
}
