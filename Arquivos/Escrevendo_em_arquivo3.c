#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//EScrevendo em arquivo com a função fprintf()

void escrever(char f[]){
    FILE *file = fopen(f, "w");
    char nome[100];
    int idade, opc;
    float altura;
    if(file){
        do{
            printf("Digite nome, idade e altura: ");
            scanf(" %100[^\n]%d%f", nome, &idade, &altura);
            fprintf(file, "%s %d %.2f\n", nome, idade, altura);
            printf("Digite 1 para inserir outro registro: ");
            scanf("%d", &opc);
        }while(opc == 1);
        fclose(file);
    }

    else
        printf("\nERRO ao abrir arquivo!\n");



}


int main(){
    //Aqui vamos aprender a escrever um fputs(), diferente da função anteirior,
    //aqui a gente consegue escrever textos em vez de pegar caracter por caracter
    char arquivo[] = {"\Arquivos-txt/Conto.txt"};
    escrever(arquivo);



    return 0;
}

