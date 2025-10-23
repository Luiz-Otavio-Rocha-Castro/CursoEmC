#include <stdio.h>
#include <stdlib.h>
/*
    4) Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em
    porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
    Assuma que a conta será dividida igualmente.
*/

int main(){
    float valor_despesa, valor_gorjeta, conta;
    int num_pessoas;
    printf("Digite o valor de despesa do restaurante: ");
    scanf("%f", &valor_despesa);
    printf("\nAgora me informe o valor da gorjeta em porcentagem: ");
    scanf("%f", &valor_gorjeta);
    printf("\nPor fim me informe a quantidade de pessoas que vai dividir a conta: ");
    scanf("%d", &num_pessoas);

    valor_gorjeta = valor_despesa * valor_gorjeta / 100;
    conta = (valor_despesa + valor_gorjeta)/ num_pessoas;

    printf("\nO valor para cada um ficou: R$%.2f\n", conta);





    return 0;


}
