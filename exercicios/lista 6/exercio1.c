#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    1) Escreva um procedimento que receba um vetor inteiro, seu tamanho e os endereços de duas
variáveis inteiras, menor e maior, salve nestas variáveis o menor e o maior valor do vetor.
*/
void preencher_vet(int vet[], int tam){
    srand(time(NULL));
    for(int i = 0; i < tam; i++){
        vet[i] = rand() % 100;
    }


}
void imprimir_vet(int vet[], int tam){
    for(int i = 0; i < tam; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}

void verificaMaioreMenor(int vet[], int tam, int *maior, int *menor){
    for(int i = 0; i < tam; i++){
        if (i == 0){
            *maior = vet[i];
            *menor = vet[i];
        }
        else if(vet[i] >= *maior)
            *maior = vet[i];
        else if(vet[i] <= *menor)
            *menor = vet[i];
    }
}

int main()
{
    int tam = 10, vet[tam], menor, maior;
    preencher_vet(vet, tam);
    imprimir_vet(vet,tam);
    verificaMaioreMenor(vet, tam, &maior, &menor);
    printf("Maior elemento: %d\tMenor elemento: %d\n", maior, menor);
    return 0;
}
