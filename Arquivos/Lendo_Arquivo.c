#include <stdio.h>
#include <stdlib.h>

int main(){
    //Vamos aprender a escrever em um arquivo.txt com a função fputc

    //Primeiro Ponto --> Criar um ponteiro para apontar para o arquivo

    FILE *file; //FILE é o tipo da variavel
    char letra;

    file = fopen("\Arquivos-txt/Conto.txt", "w+"); // função usada para abrir um arquivo, vamos escrever e ler ele
    /*
        Na função fopen() --> Precisamos de dois parametros

        1 - Local do arquivo
        2 - Informar oq vamos fazer com esse arquivo e para isso temos os modos de abertura:

          Modos de abertura de arquivos:
        w -> Escrita
        r -> leitura
        a -> anexar
        r+ -> leitura e escrita
        w+ -> leitura e escrita (apaga o conteúdo caso o arquivo exista)
        a+ -> leitura e escrita (adiciona ao final do arquivo)

    */

    if(file){
        printf("\nDigite um texto e pressione ENTER ao finalizar!!! ");
        scanf("%c", &letra);
        while(letra != '\n'){
            fputc(letra, file);
            scanf("%c", &letra);
        }
        rewind(file);// Como eu estou escrevendo no meu arquivo, precisamos concordar que
        //minha leitura está no final do arquivo, logo essa função vai fazer com q a gente volte para o inicio

        printf("\n\tTexto lido do arquivo: \n");
        while(!feof(file)){
            //Essa feof() ela informa se o ponteiro está apontando para o final do arquivo e retorna verdadeiro
            //por isso usamos o !
            letra = fgetc(file);
            printf("%c", letra);
        }



        fclose(file); // Fechando o arquivo para nao correr o risco de comrromper
    }
    else
        printf("\n\t ---> ERRO ao abrir arquivo!!\n");








    return 0;
}

