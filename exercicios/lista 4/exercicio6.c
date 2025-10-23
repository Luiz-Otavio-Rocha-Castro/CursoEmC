#include <stdio.h>
#include <stdlib.h>

/*
6) Fa�a um programa que leia 10 n�meros reais e os armazene em um vetor. Em seguida, leia um
c�digo inteiro e fa�a uma das a��es abaixo:
0 � finaliza o programa;
1 � imprime o vetor na ordem do in�cio ao fim;
2 � imprime o vetor na ordem inversa (do fim para o in�cio).
O programa deve funcionar at� que o usu�rio digite 0 para finalizar.

*/
int main(){
    float numeros[10];
    int i, opc;
    for (i = 0; i < 10; i++){
        printf("%d - > Digite um numero real: ", i);
        scanf("%f", &numeros[i]);
    }

    do{
        printf("\n0 - finaliza o programa;\n1 - imprime o vetor na ordem do inicio ao fim;\n2 - imprime o vetor na ordem inversa (do fim para o inicio).\nDigite sua opcao: ");
        scanf("%d", &opc);
        printf("\n");
        if (opc == 0){
            printf("Finalizado...\n");
        }
        else if(opc == 1){
            for (i = 0; i < 10; i++){
                printf("%.2f ", numeros[i]);
            }
            printf("\n");
        }
        else if(opc == 2){
            for (i = 9; i >= 0; i--){
                printf("%.2f ", numeros[i]);
            }
            printf("\n");
        }
        else{
            printf("Opcao invalida!!!\n");
        }
    }while(opc != 0);

    return 0;
}
