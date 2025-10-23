#include <stdio.h>
#include <stdlib.h>
/*
5) Faça um programa que receba a temperatura média de cada mês do ano, armazenando-as em um
vetor. Ao final, mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o
mês por extenso: janeiro, fevereiro ...). Desconsidere empates.
*/

int main(){

    float temp[12], maior, menor;
    int i, mesmaior, mesmenor;
    for (i = 0; i<12; i++){
        printf("Digite a temperatura media do mes %d: ", i+1 );
        scanf("%f", &temp[i]);
        //aprovetei o for para testar quem eh a maior e a menor temperatura
        if(i==0){
            maior = temp[i];
            mesmaior = i+1;
            menor = temp[i];
            mesmenor = i+1;
    }
        else if (temp[i] > maior){
            maior = temp[i];
            mesmaior = i+1;
    }
        else if(temp[i] < menor){
            menor = temp[i];
            mesmenor = i+1;
    }
    }

    if (mesmaior == 1)
        printf("A maior temperatura foi em janeiro: %.2f", maior);
    else if(mesmaior == 2)
        printf("A maior temperatura foi em fevereiro: %.2f", maior);
    else if(mesmaior == 3)
        printf("A maior temperatura foi em marco: %.2f", maior);
    else if(mesmaior == 4)
        printf("A maior temperatura foi em abril: %.2f", maior);
    else if(mesmaior == 5)
        printf("A maior temperatura foi em maio: %.2f", maior);
    else if(mesmaior == 6)
        printf("A maior temperatura foi em junho: %.2f", maior);
    else if(mesmaior == 7)
        printf("A maior temperatura foi em julho: %.2f", maior);
    else if(mesmaior == 8)
        printf("A maior temperatura foi em agosto: %.2f", maior);
    else if(mesmaior == 9)
        printf("A maior temperatura foi em setembro: %.2f", maior);
    else if(mesmaior == 10)
        printf("A maior temperatura foi em outubro: %.2f", maior);
    else if(mesmaior == 11)
        printf("A maior temperatura foi em novembro: %.2f", maior);
    else if(mesmaior == 12)
        printf("A maior temperatura foi em dezembro: %.2f", maior);
    printf("\n");
    if (mesmenor == 1)
        printf("A menor temperatura foi em janeiro: %.2f", menor);
    else if(mesmenor == 2)
        printf("A menor temperatura foi em fevereiro: %.2f", menor);
    else if(mesmenor == 3)
        printf("A menor temperatura foi em marco: %.2f", menor);
    else if(mesmenor == 4)
        printf("A menor temperatura foi em abril: %.2f", menor);
    else if(mesmenor == 5)
        printf("A menor temperatura foi em maio: %.2f", menor);
    else if(mesmenor == 6)
        printf("A menor temperatura foi em junho: %.2f", menor);
    else if(mesmenor == 7)
        printf("A menor temperatura foi em julho: %.2f", menor);
    else if(mesmenor == 8)
        printf("A menor temperatura foi em agosto: %.2f", menor);
    else if(mesmenor == 9)
        printf("A menor temperatura foi em setembro: %.2f", menor);
    else if(mesmenor == 10)
        printf("A menor temperatura foi em outubro: %.2f", menor);
    else if(mesmenor == 11)
        printf("A menor temperatura foi em novembro: %.2f", menor);
    else if(mesmenor == 12)
        printf("A menor temperatura foi em dezembro: %.2f", menor);
    printf("\n");
    return 0;
}
