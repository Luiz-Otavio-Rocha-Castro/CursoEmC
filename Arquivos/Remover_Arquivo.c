#include <stdio.h>
#include <stdlib.h>

//Como remover um arquivo usando C


int main(){
    char nome[] = {"agenda.dat"};

    //Verificando se o arquivo existe
    FILE *file = fopen(nome,"r");

    if(file){
        printf("\nArquivo aberto com sucesso!\n");
        fclose(file);

        remove(nome); //A gente passa como parametro o nome do nosso arquivo :)

    }
    else
        printf("\nErro ao abrir o arquivo!\n");

    return 0;
}
