#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
    5) Uma empresa contrata um encanador a R$ 45,00 por dia. Fa�a um programa que solicite o
    n�mero de dias trabalhados pelo encanador e imprima a quantia l�quida que dever� ser paga,
    sabendo que s�o descontados 8% para imposto de renda.
*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    float dias, porcentagem, quantia;
    printf("Digite a quantidade de dias de trabalho: ");
    scanf("%f", &dias);
    porcentagem = dias * 45 * 8.0 / 100;
    quantia = dias * 45 - porcentagem;
    printf("\nO valor a ser pago ser�: %.2f", quantia);
    return 0;
}
