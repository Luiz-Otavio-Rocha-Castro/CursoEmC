#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Vamos por um pouco a pratica em dia e ver como a gente a pode alocar um vetor de forma dinamica na memoria

int main(){
    int tam, *vet;
    srand(time(NULL));
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    vet = malloc(tam *sizeof(int));

    for(int i = 0; i<tam; i++)
        *(vet + i) = rand() % 100;
     for(int i = 0; i<tam; i++)
        printf("%d ",  *(vet + i));

    return 0;
}
