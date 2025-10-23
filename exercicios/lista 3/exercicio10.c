#include <stdio.h>
#include <stdlib.h>
/*
10) Você decidiu ficar rico guardando dinheiro por 30 dias consecutivos. Para tal, decidiu guardar 1
centavo no primeiro dia, 2 centavos no segundo dia, 4 centavos no terceiro dia, 8 centavos no quarto
dia, e assim por diante. Faça um programa para calcular quanto você terá ao final dos 30 dias.

*/

int main(){
    int i, cofre=0;
    for(i=1; i<=30; i++){
        cofre += (cofre + 1);

    }
    printf("Passado os 30 dias voce tera: R$%.2f\n", cofre /100.0);
    return 0;
}
