#include <stdio.h>
#include <stdlib.h>
/*
20) Uma rainha requisitou os servi�os de um monge e disse-lhe que pagaria qualquer pre�o. O
monge, necessitando de alimentos, indagou � rainha sobre o pagamento, se poderia ser feito com
gr�os de trigo dispostos em um tabuleiro de xadrez (que possui 64 casas), de tal forma que o
primeiro quadro deveria conter apenas um gr�o e os quadros subsequentes, o dobro do quadro
anterior. Crie um programa para calcular o total de gr�os de trigo que o monge recebeu.7
*/
int main(){
    int i;
    unsigned long long int trigo = 1, inicio = 1;
    for(i = 2; i <=64 ; i++){
       inicio = inicio * 2;
       trigo += inicio;
       printf("%d Valor: %llu\n", i, trigo);
    }
    printf("O monge recebeu o total de %llu trigos\n", trigo);

    return 0;
}
