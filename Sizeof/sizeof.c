#include <stdio.h>
#include <stdlib.h>
int main(){

    /*
    int y = 0;
    short int x = 32767;*/
    //para reduzir o tamanho de um inteiro, podemos usar o comando short, antes de criar a var
    // ex ---> short tipo nome
    //o short so funciona no intervalo: -32.768 ate 32.767
    // para imprimir podemos usar o %d ou %hi

    /* Vamos aprender agora a aumentar o tipo int*/
    long long int x = 2147483647;
    printf("Tamanho de x em Byts: %d\n", sizeof x);

    printf("Valor de x: %lld\n", x);
    x++;
    printf("Valor e x: %lld\n", x);
    // para imprimir um long, usa-se %li ou %ld, no caso de long long %lli ou %lld
    // o long varia de maquina para maquina, em algumas o long int para o int nao vai mudar nada!
    // conseguimos usar no maximo 2 vezes



    /*
    sizeof não é uma função e sim um operador
    caso queira usa-lo para descobrir o tamanho do tipo, sera necessario coloca-lo em ()
    mas se for para descobrir o tamanho de uma variavel, nao sera necessario, lembrando que
    o sizeof sempre dara o tamanho em bytes de forma inteira, por isso o uso do %d para se referir ao
    sizeof


    */
    return 0;
}
