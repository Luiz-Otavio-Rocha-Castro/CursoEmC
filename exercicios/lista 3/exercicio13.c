#include <stdio.h>
#include <stdlib.h>
/*
13) Fa�a um programa que pe�a ao usu�rio um n�mero inteiro maior que 2 e diga se o n�mero
informado � primo ou n�o.

*/
int main(){
    int valor, i, cont = 0, opc;
    do{
        do{
            printf("Digite um valor inteiro maior que 1: ");
            scanf("%d",&valor);
        }while(valor < 2);

        printf("Divisores de %d: ", valor);
        for (i = 1; i<=valor; i++){
            if(valor % i == 0){
                cont+=1;
                printf("%d ", i );
            }
        }
        if (cont == 2){
            printf("\n%d eh primo\n", valor);
        }
        else{
            printf("\n%d nao eh primo\n", valor);
        }
        printf("\n1 - Digitar outro valor\n2 - Sair\n");
        scanf("%d", &opc);
    }while(opc !=2);
    return 0;
}
