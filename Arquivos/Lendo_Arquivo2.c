#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Lendo arquivo com fscanf

void escrever(char f[]){
    FILE *file = fopen(f, "w");
    char nome[100];
    int idade, opc;
    float altura;
    if(file){
        do{
            printf("Digite o nome: ");
            scanf(" %100[^\n]", nome);
            printf("Informe a idade: ");
            scanf("%d", &idade);
            printf("Informe a altura: ");
            scanf("%f", &altura);
            fprintf(file, "%s\n%d\n%.2f\n", nome, idade, altura);
            printf("Digite 1 para inserir outro registro: ");
            scanf("%d", &opc);
        }while(opc == 1);
        fclose(file);
    }

    else
        printf("\nERRO ao abrir arquivo!\n");

}
void ler(char f[]){
    FILE * file = fopen(f,"r");
    char nome[100];
    int idade;
    float altura;
    if(file){
        printf("\tDados lidos do arquivo!\n");
        while(fscanf(file, " %100[^\n]%d%f", nome, &idade, &altura) != -1)
            printf("\n\tNome: %s\n\tIdade: %d\n\tAltura: %.2f\n", nome, idade, altura);
        fclose(file);
    }
    else
        printf("\nERRO ao abrir arquivo!\n");


}




int main(){
    char arquivo[] = {"\Arquivos-txt/Conto.txt"};
    escrever(arquivo);
    ler(arquivo);



    return 0;
}

