#include <stdio.h>;
#include <stdlib.h>;
    /* mas para que serve o incremento?
        o incremento vai pegar o valor de uma variavel e vai somar +1 a ela e salvar o valor nela novamente
    */

int main(){

    // para usar um contador é muito simples, basta voce usar ++ na variavel, veja os exemplos a seguir:

    int contador = 10;

    printf("Valor: %d\n", ++contador);
    // obs se voce for usar o incremento dentro da funçao print, precisa colocar o ++ antes da var
    // a mesma coisa serve em caso de uma atribuiçao: resultado = ++contador

    contador++;
    printf("Valor: %d\n", contador);
    //mas se quiser utilizar fora pode por depois da var

    // outras formas de usar incremento
    contador += 1;
    contador = contador + 1;


    // vamos aproveitar e dar uma olhada no decremento--
    contador--;
    printf("Valor: %d\n", contador);
    // as mesmas regras do incremento serve para o decremento!!!

     // outras formas de usar decrmento
    contador -= 1;
    contador = contador - 1;


    return 0;


}

