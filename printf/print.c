#include <stdio.h>
// o comando --printf-- para me trazer informações na tela ou seja ela é uma função de SAÍDA
// o caractere de escape para saltar uma linha --> \n
int main(){
    /*
    system("pause"), o melhor a se fazer é não usa-lo, pois ele funciona somente no windowss e
    OBS: caso vc não esteja usando uma IDE
    */
    printf("linha 1\nlinha 2\nlinha 3");
    // como contorna-lo
    printf("\nAperte qualquer tecla para finalizar\n");
    getchar();
    return 0;

}
