#include <stdio.h>
#include <stdlib.h>
/*
    7) Fa�a um programa para ler do teclado uma quantidade de segundos e imprimir na tela a
    convers�o para horas, minutos e segundos.
    Exemplo:
    Entrada: 3672
    Sa�da: 1:1:12

*/

int main(){
    int hora, minutos, segundos;
    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);
    hora = segundos / 3600;
    minutos = segundos % 3600 / 60;
    segundos =  segundos % 3600 % 60;
    printf("%d:%d:%d\n", hora,minutos,segundos);


    return 0;
}

