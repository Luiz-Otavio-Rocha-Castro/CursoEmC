#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Como somar os elementos de um vetor e descobrir qual o maior elemento com recursão?
*/
int somavet(int v[], int tam){
    if (tam == 0){
        return 0;
    }
    else{
        return v[tam - 1] + somavet(v, tam-1);
    }

}
int maiorelemento(int v[], int tam){
     if (tam == 1){
        return v[0];
    }
    else{
        if(v[tam-1] > maiorelemento(v,tam-1))
            return v[tam-1];
        else{
            return maiorelemento(v,tam-1);
        }
    }
}

int main(){
    int tam = 5;
    int vet[tam];
    srand(time(NULL));
    for (int i = 0; i < tam; i++){
        vet[i] = rand() %10;
        printf("%d ", vet[i]);
    }
    printf("\nA soma dos elementos do vet: %d\n", somavet(vet, tam));
    printf("\nO maior elemento do vet: %d\n", maiorelemento(vet, tam));

    return 0;
}
