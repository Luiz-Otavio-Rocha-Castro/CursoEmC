#include <stdio.h>
#include <stdlib.h>
/*
22) Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3
centímetros por ano. Construa um programa que calcule e imprima quantos anos serão necessários
para que Zé seja maior que Chico.
*/
int main(){
    int ano=0;
    float chico=1.5, ze = 1.1;
    while(chico>=ze){
        chico+=0.02;
        ze += 0.03;
        ano +=1;

    }
    printf("Sera necessario %d anos para que Ze com %.2fm fique maior que Chico com %.2fm!\n", ano,ze,chico);
    return 0;
}
