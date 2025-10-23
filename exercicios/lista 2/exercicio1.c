#include <stdio.h>
#include <stdlib.h>
/*1) Escreva um programa em C que leia três valores
e apresente qual é o maior e qual é o menor. */
int main(){
    int num1,num2,num3,menor, maior;
    printf("Digite tres valores:  ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 >= num2 && num1>=num3){
        maior = num1;
        if(num2 >= num3){
            menor = num3;
        }
        else{
            menor = num2;
        }
    }
    else if(num2 >= num1 && num2>=num3){
        maior = num2;
        if(num1 >= num3){
            menor = num3;
        }
        else{
            menor = num1;
        }
    }
    else{
        maior = num3;
        if(num1 >= num2){
            menor = num2;
        }
        else{
            menor = num1;
        }
    }
    printf("O maior valor: %d\n", maior);
    printf("O menor valor: %d\n", menor);

    return 0;
}
