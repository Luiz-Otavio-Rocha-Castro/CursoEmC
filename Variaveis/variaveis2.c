#include <stdio.h>
#include <stdlib.h>

int main(){
    //outra forma que poderiamos ler caractere
    char letra;
    printf("Digite uma letra: ");
    letra = getchar();
    getchar(); // coloquei outro getchar, pois estava dando conflito com o getc

    /* ao inves do scanf, no get char para voce direcionar para onde quer armazenar o caractere,
    basta escrever nome_da_variavel = getchar() ou seja fazer uma atribuição*/

    printf("Caracter lido: %c\n", letra);

    //temos tambem mais uma forma para ler caractere
    char letra2;
    printf("Digite um caracter: ");
    letra2 = getc(stdin);
    getchar();
    /* Muito parecido com o getchar, porem no getc a gente precisa informar de onde
    esse caracter vai ser lido, se vai ser do teclado, de um arquivo, etc
    nesse caso se for para informar que vai ser lido do teclado, precisamos utilizar a costante -stdin-
    */
    printf("Caracter lido: %c\n", letra2);


    //quarta forma de ler caractere
    char letra3;
    printf("Digite um caracter: ");
    // essa função e mais ligada com arquivos, mas tbm pode ser usada para ler o teclado
    letra3 = fgetc(stdin);
    printf("Caracter lido: %c\n", letra3);




    return 0;
}
