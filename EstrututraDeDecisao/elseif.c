#include <stdio.h>
#include <stdlib.h>
        // else if encadeados
int main(){
    int a = 10;

    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    //primeira versao sem utilizar o else if:
    if (a<0){
        printf("\n\tValor NEGATIVO!\n");
    }
    else{
        if (a>0){
            printf("\n\tValor POSITIVO!\n");
        }
        else{
            printf("\n\tValor � ZERO!\n");
        }
    }

    //segunda versao utilizando else if
    if (a<0){
        printf("\n\tValor NEGATIVO!\n");
    }
    //eu posso concetar um else com if
    else if(a>0){
        printf("\n\tValor POSITIVO!\n");
    }
    else{
        printf("\n\tValor � ZERO!\n");
    }
    /*
    NAO TEM DIFEREN�A NA VELOCIDADE, O QUE MUDA VAI SER APENAS A ORGANIZA��O!!!!

    */
    return 0;
}
