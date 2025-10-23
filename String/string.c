#include <stdio.h>
#include <stdlib.h>
#include <string.h>//para manusear string
/*
    Oq eh uma string??
    Eh um conjunto de caracteres ou melhor um vetor de caracteres

*/

int main(){
    //criando uma string
    char nome[20] = {"Luiz"};
    //veja que agora em strings usamos "", automaticamente o copilador de entende que isso eh uma string;

    //Printando uma string
    printf("%s\n", nome);


    //lendo uma string
    printf("Digite seu nome: ");
    //scanf("%20[^\n]", nome);
    /*
        Perceba que meu scanf agora eh um pouco diferente

        scanf("Aqui dentro eu vou dizer quantos caracteres eu quero guardar no meu vetor
        e que ele leia ate que o enter seja pressionado", nome da variavel);

        -> Perceba que assim, a gente consegue evitar com que o scanf leia mais caracteres
        do que o nosso vetor permite e tbm a gente evita de ele parar de ler em espaços e
        note que nesse caso em especifico, nao eh necessario & na variavel!

    */

    //Eu sei que foi um pouco diferente, mas a gente pode usar outras funcoes;
    //gets(nome); essa funcao ainda e insegura, evite usa-la
    fgets(nome, 20, stdin);//Essa e completamente segura e pode usar
    /*
        Ao usar o fgets sera necessario informar
        Onde quero salvar esse texto, a quantidade de caractere, de onde vem essa string
        Como a gente quer dizer que ela vem do teclado, usamos stdin

        Atencao: Na funcao fgets, ela vai ler sempre um caracter a menos, pois ela sempre esta
        guardando espaço para coloca o caractere que indica o final da string
    */

    //como descobrir o fim da string
    int i = 0;
    while(nome[i] != '\0'){
        //removendo o \n da string
        printf("%d = %d\n", i, nome[i++]);
    }
    //Fazendo isso imprimos apenas as posicoes que estao preenchidas no vetor
    //\0 siginifica nulo ou seja o fim da string

    //removendo o '\n' da string
    i = 0;
    while(nome[i] != '\0'){
        if(nome[i] == '\n')
            nome[i] = '\0';
        i++;
    }



    //tamanho de uma string
    int tam = 0;
    i = 0;
    while(nome[i] != '\0'){
        tam++;
        i++;
    }
    //Ou podemos usar a funcao strlen()


    printf("Tamanho %d\n", strlen(nome));


    //Concatenando duas strings ou melhor dizendo: juntando duas strings
    char palavra1[20] = {"OIOI"};
    char palavra2[20] = {" Bom dia"};
    strcat(palavra1, palavra2);
    printf("%s\n", palavra1);

    return 0;

}




