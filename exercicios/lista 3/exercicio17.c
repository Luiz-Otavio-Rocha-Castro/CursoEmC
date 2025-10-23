#include <stdio.h>
#include <stdlib.h>
/*
17) Faça um programa que peça números ao usuário. Quando o usuário digitar o número 0 (zero) o
programa deve imprimir na tela quantos números positivos e negativos foram digitados.
Exemplo:
*/
int main(){
    int num, cont_positivo = 0, cont_negativo = 0;
    do{
        printf("Digite um valor: ");
        scanf("%d", &num);
        if(num > 0){
            cont_positivo+=1;
        }
        else if(num < 0){
            cont_negativo+=1;
        }
    }while(num!=0);
    printf("Positivos: %d\n", cont_positivo);
    printf("Negativos: %d\n", cont_negativo);
    return 0;
}
