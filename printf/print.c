#include <stdio.h>
// o comando --printf-- para me trazer informa��es na tela ou seja ela � uma fun��o de SA�DA
// o caractere de escape para saltar uma linha --> \n
int main(){
    /*
    system("pause"), o melhor a se fazer � n�o usa-lo, pois ele funciona somente no windowss e
    OBS: caso vc n�o esteja usando uma IDE
    */
    printf("linha 1\nlinha 2\nlinha 3");
    // como contorna-lo
    printf("\nAperte qualquer tecla para finalizar\n");
    getchar();
    return 0;

}
