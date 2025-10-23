#include <stdio.h>
#include <stdlib.h>
/*
11) Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a
massa inicial, em gramas, faça um programa que determine o tempo necessário para que essa massa
se torne menor que 0,05 gramas.
*/
int main(){
    float massa_inicial;
    int contador = 0;
    printf("Digite a massa: ");
    scanf("%f", &massa_inicial);
    while(massa_inicial >= 0.05){
        massa_inicial = massa_inicial / 2;
        contador += 50;

    }
    printf("Foi necessario %d segundos para a massa ficar menor que 0,05\n", contador);

    return 0;
}
