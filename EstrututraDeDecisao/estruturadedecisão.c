#include <stdio.h>
#include <stdlib.h>
                /*vamos aprender a usar o IF - um teste
                                if = se
                    o if sempre depende de um verdadeiro ou falso.
                */
int main(){
    int a = 10;
    printf("Digite um valor inteiro qualquer: ");
    scanf("%d", &a );
    printf("If ou else");
    if(!(a < 0))//se a menor que 0
        printf("\n\tValor negativo!\n"); //esse printf so vai ocorrer, se o teste for verdade
        // basicamente esse teste verifica se ele � igual a 1 --> (a < 0 == 1)
    /*
        No momento a gente perguntou so a parte positiva do teste, mas se eu quiser a parte negativa?
        basta utilizar o senao --- else
    */
    else{
        //Podemos usar if dentro de ifs - decisoes aninhadas
        if(a>0)
            printf("\n\tValor positivo!\n");
        else
            printf("\n\tValor igual a zero!\n");

    }
    //essa parte so sera executada se a compara��o for falsa
    // obs so � negativo se o resultado for 0


    printf("\nContinuacao do programa...\n\n");
    // por isso que esse print aparece, pq ele pertence ao programa principal

    /*
        Pega esse bizu:
            se seu if ou else tiver apenas um linha, nao precisa usar {}, mas tome cuidado para esquecer
            outro ponto importante a endenta��o nao altera nada, apenas visual
                                    RESUMO
            ENDENTA��O � APENAS UM RECURSO VISUAL!!!!
            MAS � UMA BOA PR�TICA USA-LA

    */

    //outra estrutura de decisao
    // a gente pode utilizar o operador ternario, mas ele n�o � muito comum
    //podemos aninhar tbm o operador ternenario
    printf("Operador ternario");
    !(a < 0) ? printf("\n\tValor negativo!\n") :
        a > 0 ? printf("\n\tValor positivo!\n") : printf("\n\tValor igual a zero!\n");
    // condi��o ? verdade : falso
    //por isso o nome ternario, pq ele tem tres partes


    /*vamos aprender como funciona o operador logico de nega��o !
        ele serve para negar express�es.
        se voce quiser negar expressoes logicas, voce tem que fazer do seguinte modo:
                            !(a < 0)
                TABELA VERDADE:
                A < 0           !(A < 0)
                  V                 F
                  F                 V


    */



    return 0;
}
