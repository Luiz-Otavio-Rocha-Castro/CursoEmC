#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Como inverter a posição dos elementos de um vetor com recursão?
*/
int inicio = 0;

void imprimirvet(int vet[], int tam){
    if(tam == 1){
        printf("%d ", vet[0]);
    }
    else{
        imprimirvet(vet, tam-1);
        printf("%d ", vet[tam-1]);
    }
}
void invertervet(int vet[], int tam){
    int aux;
    if (tam - 1 > inicio){
        aux = vet[tam-1];
        vet[tam-1] = vet[inicio];
        vet[inicio] = aux;
        inicio ++;
        invertervet(vet, tam - 1);
    }
}

int main(){
    int tam = 5;
    srand(time(NULL));
    int vet[tam];
    for (int i = 0; i < tam; i++){
        vet[i] = rand() %10;
    }

    imprimirvet(vet, tam);//antes de inverter
    invertervet(vet, tam);
    printf("\n");
    imprimirvet(vet, tam);//depois de inverter
    return 0;
}

