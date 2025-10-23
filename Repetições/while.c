#include <stdio.h>
#include <stdlib.h>
            /*
                While - enquanto
                e quando usar ele?
                quando voce nao tiver ponto inicial e o ponto de parada, como vimos no for
                vai ficar se repetindo ate que uma condiçao seja atendida, veja:

                obs: toda estrutura do for pode ser escrita em while, mas sua reciproca nao
            */
int main(){
    int valor;
    printf("While\n");
    printf("Digite um valor maior que zero: ");
    scanf("%d",&valor);
    // enquanto(valor < = 0)
    while(valor <= 0){
        printf("Valor invalido!!!");
        printf("Digite um valor maior que zero: ");
        scanf("%d",&valor);
    }
    /*Veja que a repetiçao so chegarar ao fim, quando a condição for atendida
    É isso que a diferencia do for, pois como eu nao sei quantas vezes isso vai ocorrer,
    ja que o usurio pode digitar de primeira ou entao so na milesima vez, por isso veja
    que o while sera necessario quando voce tem algo "incerto"

    */
    printf("Valor lido: %d\n\n", valor);

    /* Aproveitando o gancho vamos ver agora o do{}while - faça enquanto
                    while x do while
                no do while, ele ja começa fazendo e depois testa
                ja no while, ele testa antes e depois faz
    */
    int valor2;
    printf("\n\nDo while\n");
    do{
        printf("Digite um valor maior que zero: ");
        scanf("%d",&valor2);
    }while(valor2 <= 0);//perceba que a estrutura termina aqui

    printf("Valor lido: %d\n\n", valor2);




    return 0;
}
