#include <stdio.h>
#include <stdlib.h>
/*
    operadores matematicos para:
    soma            +
    subtra��o       -
    Multiplica��o   *
    Divis�o         /
    resto de divisao %
*/


int main(){
    int a = 10, b = 20;
    printf("Soma: %d\n", a+b);
    printf("Subtracao: %d\n", a-b);
    printf("Multiplicacao: %d\n", a * b);
    printf("Divisao: %.2f\n", (float)a / b);
    printf("Resto da divisao: %d\n", b % a);

    /*obs: em C, quando voce divide dois numeros inteiros, o resultado vai ser inteiro, portanto �
     importante que um dos numeros seja real, em caso de variaveis pode fazer essa convers�o da seguinte
     forma : (tipo) var


      */

    float pi = 3.14;
    a = (int)pi;
    printf("O valor de a : %d\n", a);
    // entao a dica que fica �, podemos fazer a convers�o, mas temos que tomar cuidado, principal no caso
    // de float -> int, pq ao converter voce perde a parte inteira


    return 0;

}
