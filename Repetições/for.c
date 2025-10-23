#include <stdio.h>
    /*
        Vamos ver agora algumas estruturas de repetiçao
        a primeira hoje é o para(for)

    */
int main(){
    int i = 0;

    printf("%d " , i++);
    printf("%d " , i++);
    printf("%d " , i++);
    printf("%d " , i++);
    printf("%d " , i++);
    printf("%d " , i++);
    printf("%d " , i++);
    printf("%d " , i++);
    printf("%d " , i++);
    printf("%d " , i++);
    printf("%d\n\n" , i++);
    //perceba que todas as linhas sao iguais!!!
    //Com isso nos podemos usar uma estrutura de repetiçao

    /*
        para(condição de inicio; condiçao de parada; incremento)
        essa é a estrutura do for
    */
    for(i = 0; i<=10; i++) // obs: declare o i antes!!!
        printf("%d ", i);// obs: esta sem {}, pq so tem uma instruçao, é a mesma ideia do if else

    // esse for vai imprimir do 0 ao 10, a mesma coisas das linhas anteriores

    /*
        tentanto explicar o for::
        basicamente começamos atribuindo o valor de i ou seja, estamos dizendo de onde queremos começar
        logo em seguida ele vai pegar o numero que esta em i, no caso 0 e vai comparar para ver se ele
        é menor ou igual a 10, se for, ele faz as intruçoes e depois incrementa, e vai fazendo a mesma coisa
        ate que o numero, seja maior que 10.
    */



    //Vamos dar umaa olhada em como fazer o for de tras para frente
    printf("\n\nFor inverso\n");
    int j = 10;
    printf("%d " , j--);
    printf("%d " , j--);
    printf("%d " , j--);
    printf("%d " , j--);
    printf("%d " , j--);
    printf("%d " , j--);
    printf("%d " , j--);
    printf("%d " , j--);
    printf("%d " , j--);
    printf("%d " , j--);
    printf("%d\n\n" , j--);
    for(j = 10; j>=0; j--)
        printf("%d ", j);
    /*a ideia se torna a mesma, mas ao inves de incrementar, nos iremos fazer o decremento*/

    printf("\n\nFor com incremento diferente de 1\n");


    //Vamos dar uma olhada agora em como fazer um for com incremento diferente de 1
    int k;
    for (k = 5; k <=100; k+=5){// k = k + 2
        printf("%d ", k);
    }
    return 0;
}
