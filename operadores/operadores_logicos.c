#include <stdio.h>
#include <stdlib.h>
        /*
                Operador lógico e (&)
                se todos os testes forem verdadeiro ele vai ser verdadeiro
                qualquer situaçao alem dessa sera falsa!!!

                    TABELA VERDADE
                    A   B   A & B
                    V   V     V
                    V   F     F
                    F   V     F
                    F   F     F

        */



int main(){
    int idade;
    char sexo;

    printf("Digite seu sexo(m ou f) e sua idade: ");
    scanf("%c%d", &sexo, &idade);

    //podemos evitar as estruturas aninhadas, usando operadores logicos, deixando algo mais enxutos
    if(sexo == 'm' && idade == 18)
        // perceba que para usa-lo é muito simples, dentro do () voce vai dividir as expressoes atraves de &&
        printf("Alistamento Obrigatorio!\n");
    else
        printf("Dispensado!\n");

        /*
            Qual a melhor de saber se eu vou precisar usar o operador logico &&?
                LEIA SUA EXPRESSÃO EM PORTUGUES, ELA VAI DIZER ISSO PARA GENTE!!!
        */
    return 0;
}
