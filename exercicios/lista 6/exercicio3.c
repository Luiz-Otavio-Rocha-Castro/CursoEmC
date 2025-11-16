#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
  3) Crie um programa que contenha um array de inteiros com 10 elementos. Imprima o elemento e o
endereço de cada posição do array.

*/
void preencher_vet(int vet[], int tam){
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++){
        vet[i] = rand() % 100;
    }

}
void imprimir_pos_e_end(int vet[], int tam){
    int i, *p;
    for (i = 0; i < tam; i++){
        p = vet + i;
        printf("Posicao: %d\tValor: %d\tEndereco: %p\n", i, *p, p);
    }


}


int main(){
    int tam = 10, vet[tam];
    preencher_vet(vet, tam);
    imprimir_pos_e_end(vet, tam);

    return 0;
}
