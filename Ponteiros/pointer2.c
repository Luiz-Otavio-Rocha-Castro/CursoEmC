#include <stdio.h>
#include <stdlib.h>
void imprimir(int vet[], int tam){
    int i;
    for(i = 0; i < tam; i++)
        printf("%d ", *(vet + i));
    printf("\n");

}

int main(){

    //aritimetica com ponteiros com vetor
    int vet[10] = {10,6,5,21,4,3,2,3,2,1};

    imprimir(vet, 10);

    return 0;
}
