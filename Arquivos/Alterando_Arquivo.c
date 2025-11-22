#include <stdio.h>
#include <stdlib.h>

/*
        Alterando um arquivo binário com a função fseek()
        Modos de abertura de arquivos:
        wb -> Escrita
        rb -> leitura
        ab -> anexar
        rb+ -> leitura e escrita
        wb+ -> leitura e escrita (apaga o conteúdo caso o arquivo exista)
        ab+ -> leitura e escrita (adiciona ao final do arquivo)
*/
typedef struct{
    char nome[50];
    int dia,mes,ano;


}Contato;

void escrever(char arq[]){
    Contato c;
    FILE *file = fopen(arq, "ab");

    if(file){
        printf("Digite o nome e a data de nascimento dd mm aaaa: ");
        scanf("%49[^\n]%d%d%d", c.nome, &c.dia, &c.mes, &c.ano);
        fwrite(&c, sizeof(Contato), 1, file);
        /*
            Precisamos informar 4 coisas, o endereço do conteudo que a gente quer salvar,
            o tamanho de bytes, o numero de elementos e o local
        */
        fclose(file);
    }
    else
        printf("Erro ao abrir arquivo!\n");
}
void ler(char arq[]){
    Contato c;
    FILE *file = fopen(arq, "rb");
    if(file){
        while(!feof(file)){
            if(fread(&c, sizeof(Contato), 1, file))
            //Muito parecida com o fwrite()
                printf("\nNome: %s\nData:%d/%d/%d\n",c.nome,c.dia,c.mes,c.ano);
        }

        fclose(file);
    }
    else
        printf("Erro ao abrir arquivo!\n");


}
void alterar(char arq[]){
    FILE *file = fopen(arq, "rb+");
    //Vamos trabalhar com leitura e escrita agora
    Contato c;
    int id, i = 1;

    if(file){
        while(fread(&c, sizeof(Contato), 1, file)){
            printf("\nCod:%d\nNome: %s\nData:%d/%d/%d\n",i,c.nome,c.dia,c.mes,c.ano);
            i++;
        }
        printf("\n\tDigite o indice do contato que deseja alterar:\n\n");
        scanf("%d", &id);
        id--;

        if(id>=0 && id < i - 1){
            printf("Digite o nome e a data de nascimento dd mm aaaa: ");
            scanf(" %49[^\n]%d%d%d", c.nome, &c.dia, &c.mes, &c.ano);
            fseek(file, id * sizeof(Contato), SEEK_SET);
            fwrite(&c, sizeof(Contato), 1, file);
        }
        fclose(file);
    }
    else
        printf("Erro ao abrir arquivo!\n");



}



int main(){
    char arquivo[] = {"agenda.dat"};
    //agenda vai ser o arquivo binario
    alterar(arquivo);
    ler(arquivo);

    return 0;
}

