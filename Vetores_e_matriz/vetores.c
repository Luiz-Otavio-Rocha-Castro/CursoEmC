#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Vetores ---> É uma estrutura de dado homogenea, nela vamos armazenar um conjuto
de valores que sejam do mesmo tipo, por exemplo, quero guardar 10 numeros inteiros.
Veja que no modelo de variavel que usavamnos, isso nao era possivel, pois ela
so conseguia armazenar apenas um valor!
*/

int main(){
    //Como criar um vetor?
    int valores[10];
    int valores2[] = {1,2,3,4,5,6,7,8,9,10};//veja que quando eu informo meu conjutop
    //de valores nao se torna necessario, infomar o tamanho

    int valores3[5] = {4,7,45};/*Voce pode indicar um tamanho de vetor, mas nao sera
    obrigado armazenar o mesmo numero de elementos do tamanho.
    Nesse caso o nosso vetor ficara composto por:
    4,7,45,0,0
    */
    int valores4[5] = {1,2,3,4,5,6};/*Por mais incrivel que pareça, nao tem problema
    vc fazer isso, mas como a quantidade de elementos informados, e maior que o
    tamanho do vetor, o dado que sobrar sera perdido.
    */
    int valores5[5] = {0};// Nesse caso, todos os elementos vao ser 0

    char letras[5] = {'a', 'b', 'c', 'd', 'e'};

    float notas[3] = {7.5, 8.3, 9.5};

    /*
    Veja que para criar um vetor é bem semelhante a criacao de uma variavel simples
    tendo a seguinte estrutura:
    tipo identificar [tamanho do vetor,
    ou melhor dizendo, quantos elementos vai ter nesse conjuntos];
    */


    // Como pecorrer um vetor e imprimir ele na tela:
    int i;
    for (i = 0; i < 10; i++)
        printf("%d ", valores2[i]);
    printf("\n\n");
    for (i = 0; i < 5; i++)
        printf("%c ", letras[i]);
    printf("\n\n");
    for (i = 0; i < 3; i++)
        printf("%.2f  ", notas[i]);

    //Como ler um vetor pelo teclado?
    int numeros[40];
    for (i = 0; i < 1; i++){
        printf("\nDigite o elemento da posicao %d: ", i);
        scanf("%d", &numeros[i]);
    }
    //Como alterar o conteudo?
    for (i = 0; i < 10; i++){
        numeros[i] = numeros[i] * 3;
    }

    printf("\n\n");
    for (i = 0; i < 10; i++){
        printf("%d ", numeros[i]);
    }
    printf("\n\n");


    //Como gerar numeros aleatorios em um vetor:
    srand(time(NULL));
    /*Veja que nao e aleatorio totalmente, precisamos sempre partir
    de uma semente(um valor inicial), portanto esse valor inicial, tbm nao vai gerar
    numeros aleatorios, pois se voce usar srand(5), ele sempre vai gerar os mesmos
    numeros tambem, por isso a gente usa a funcao time(), dentro da srand, para pegar
    a hr do computador, pois a hora do computador sempre vai ser um valor diferente
    -> lembre-se que para usar essa funçao sera necessario importar a biblioteca
    time.h
    */
    for (i = 0; i < 40; i++)
        numeros[i] = 1 + rand() % 99;

    for (i = 0; i < 40; i++){
        printf("%d ", numeros[i]);
    }
    printf("\n\n");
    return 0;
}

