#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    7) Faça um programa para ordenar um vetor com 100 números inteiros. Imprima o vetor antes e
após a ordenação.
    0 1 2 3  4 5
    5 1 9 2 11 2
    1 5 2 9 2 11
*/


int main(){
    int vet[100], i, aux, ordenado;
    srand(time(NULL));
    for(i = 0; i < 100; i++){
        vet[i] = rand() % 100;

    }
    printf("Vetor antes da ordenacao: ");
    for(i = 0; i < 100; i++){
        printf("%2d ", vet[i]);
    }
    do{
        ordenado = 0;
        for(i = 0; i < 99; i++){
            if(vet[i] > vet[i+1]){
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i + 1] = aux;
                ordenado = 1;
            }
        }
    }while(ordenado);
    printf("\n\nVetor antes da ordenacao: ");
    for(i = 0; i < 100; i++){
        printf("%2d ", vet[i]);
    }

    printf("\n");

    return 0;
}
