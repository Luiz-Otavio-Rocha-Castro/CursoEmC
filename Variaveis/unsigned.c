#include <stdio.h>
#include <stdlib.h>

int main(){
    /*o operador unsigned tbm pode aumentar o tamanho de um tipo de variavel, mas como ele faz isso?
    primeiro, temos que relembrar que a varivel tem um intervalo limite nela, começando de um intervalo
    negativo..... 0 ..... 2.147.483.647. O operador unsing vai trabalhar exatamente encima disso, ele
    tira a parte negativo do intervalo e aumenta o do lado positivo.

    resumindo no unsigned nao vai existe numeros negativos, mas em compensaçao o tamanho de numeros positivos
    que podem ser armazenados aumentam, sem mexer no tamanho dos bytes
    */
    unsigned int x = 2147483647;
    printf("%u\n", ++x);
    // %d ---> %u
    printf("o tamanho e: %d\n ", sizeof x);
    //vemos entao que ele nao altera o tamanho de bytes na memoria

    //podemos combinar ele com outros operadores:
    unsigned short int y = 55000;
    //%hu ou %d

    unsigned long int z = 3920212133;
    //%lu


    return 0;
}
