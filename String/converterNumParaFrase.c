#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Converter num -> string
    Vamos aprender utilizando o seguinte exemplo:
        *Pergunte ao usuario qual o tamanho maximo da string e peça depois a string, sem estourar memoria
*/
int main(){
    int tamanho_vet;
    char vet1[10] = {"%"}, vet2[10];
    printf("Me informe o tamanho da palavra: ");
    scanf("%d", &tamanho_vet);
    getchar();

    snprintf(vet2, 10, "%d[^\n]", tamanho_vet);
    /*
        Basicamente aqui, vamos usar uma funçao para fazer essa conversão
        (qual variavel vai receber o valor, tamanho do vetor que vai receber, a string, e a vriavel
         subistituindo o %d)

         Menção honrosa ao sprintf, voce deve ta se perguntando o pq que nao usamos ele aqui
         ->Basicamente o sprintf nao se importa com o tamanho do vetor que vai receber essa transformação
         podendo gerar então um estouro de memoria
    */
    strcat(vet1, vet2);

    char palavra[tamanho_vet];
    printf("Digite sua string: ");
    scanf(vet1, palavra);
    //Vamos montar uma string que vai ser igual a %tam[^\n]


    return 0;
}
