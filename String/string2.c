#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Continuacao de string
*/

int main(){
    //Comparando duas strings
    char palavra1[20] = {"bola"};
    char palavra2[20] = {"abacate"};

    printf("%d\n\n", strcmp(palavra1, palavra2));
    //Se retorna 0 -> sao iguais
    //Se retorna -1 > sao diferentes e a string1 eh menor que a string2 ou seja no dicionario a string 1 vem antes da segunda
    //Se retorna  1 > sao diferentes e a string1 eh maior que a string2 ou seja no dicionario a string 1 vem depois da segunda

    //como fazer uma copia de uma string
    //obs: palavra1 = palavra2; -> isso nao funciona!!!!
    printf("Antes da troca: \nPalavra 1 -> %s\nPalavra 2 -> %s\n",palavra1 , palavra2 );
    /*int i = 0;
    while(palavra2[i] != '\0'){
        palavra2[i] = palavra1[i];
        i++;
    }
    */
    strcpy(palavra2/*destino*/, palavra1/*origem*/);
    printf("Depois da troca: \nPalavra 1 -> %s\nPalavra 2 -> %s\n",palavra1 , palavra2 );

    /*procurando caracter em uma string
    para isso temos duas funcoes
    strchr - retorna a primeira ocorrencia
    strrchr - > retorna a ultima ocorrencia
    obs: essa funcao sempre vai retornar um ponteiro, de forma mais grossa, o ponteiro eh um endereço de memoria
    nesse caso ele vai apontar para gente aonde o nosso caracter procurado esta
    */
    char palavra[20] = {"abacate"};
    char *letra; //para criar um ponteiro, basta coloca * na frente do identificador da var
    letra = strchr(palavra, 'a');
    printf("\n\n%c\n", *letra);//veja que ele retorna uma letra
    //para verificar se essa letra esta realmente na primeira posicao, podemos imprimir a letra apos a ela
    printf("\n\n%c\n", *(letra + 1));
    //E a mesma ideia vale para o strrchr


    //Como encontrar uma sub string em uma string maior!!! - > strstr();
    char palavra3[50] = {"Bom dia simpatia!"};
    char str[] = {"uia"};
    char * ponteiro;// a funcao tbm retorna um ponteiro

    ponteiro = strstr(palavra3, str);
    if(ponteiro != NULL)
        printf("\n\n%c%c%c\n", *ponteiro, *(ponteiro + 1), *(ponteiro + 2));
    else
        printf("\nPonteiro nulo.\n");


    /*Convertendo uma string toda para maiuscula
        -> strupr: maiuscula
        -> strlwr: minuscula
    */
    char texto[50] = {"TestaNDo"};
    printf("Minusculo: %s\n", strlwr(texto));
    printf("Maiusculo: %s\n", strupr(texto));

    //Como dividir a string em tokens ou seja em pedaços
    char texto1[60] = {"Bom!dia.simpatia Bom dia"};
    char *p;// nesse caso tambem vamos precisar de um ponterio para a receber a funcao strtok()
    p = strtok(texto1, "!. ");
    /*
        Veja que no primeiro elemento, eu informo qual a variavel, e em seguida eu informo que se tiver
        algum desses caracteres, ele faça a divisao
    */
    while(p != NULL){
        printf("Token: %s\n", p);
        p = strtok(NULL, "!. ");//Aqui eu peço para que ele continue pecorrendo a string e olhe se tem algum caracter
    }
    /*
    A gente necessita de uma repetiçao, pois se nao ele vai so mostrar o primeiro token
    */


    //Como armazenar varias strings -> Matriz de srings
    //Cada linha da nossa matriz vai ser uma string
    char nomes[5][25];
    int i;
    for(i = 0; i < 5; i++){
        printf("Digite o nome da posicao %d: ", i);
        fgets(nomes[i], 25, stdin);
    }
    for(i = 0; i < 5; i++){
        printf("\nNome da posicao %d: %s ", i, nomes[i]);
    }




    return 0;
}
