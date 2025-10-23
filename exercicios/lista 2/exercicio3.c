#include <stdio.h>
#include <stdlib.h>
/*
3) Escreva um programa em C que leia um número e informe se ele é divisível por 2, por 3 ou por
5, ou se não é divisível por nenhum deles.
*/


int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    if (num % 2 == 0 || num % 3 == 0 || num % 5 ==0){
        printf("Seu numero e divisivel por 2, 3 ou 5\n");
    }
    else{
        printf("Seu numero nao e divisivel por 2, 3 e 5");
    }
    return 0;
}
