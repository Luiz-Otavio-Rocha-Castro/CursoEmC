#include <stdio.h>
#include <stdlib.h>

/*2) Escreva um programa em C que lê 5 números inteiros, um por vez. Conte quantos destes valores
são negativos e quantos são positivos. Ao final, imprima na tela a quantidade de números negativos
e positivos.
*/

int main(){
    int num, cont_positivo = 0, cont_negativo = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num>=0){
        cont_positivo += 1;}
    else{
        cont_negativo +=1;}

    printf("Digite outro numero: ");
    scanf("%d", &num);
    if (num>=0){
        cont_positivo += 1;}
    else{
        cont_negativo +=1;}

    printf("Digite outro numero: ");
    scanf("%d", &num);
    if (num>=0){
        cont_positivo += 1;}
    else{
        cont_negativo +=1;}

    printf("Digite outro numero: ");
    scanf("%d", &num);
    if (num>=0){
        cont_positivo += 1;}
    else{
        cont_negativo +=1;}

    printf("Digite outro numero: ");
    scanf("%d", &num);
    if (num>=0){
        cont_positivo += 1;}
    else{
        cont_negativo +=1;}

    printf("\nA quantidade de numeros positivos = %d\nA quantidade de numeros de negativos = %d\n", cont_positivo, cont_negativo);
    return 0;
}
