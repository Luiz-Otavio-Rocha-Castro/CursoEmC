#include <stdio.h>
#include <stdlib.h>
/*
26) Escreva um programa para ler as notas da primeira e da segunda avalia��o de um aluno. Calcule
e imprima a m�dia semestral. O programa dever� aceitar apenas notas v�lidas no intervalo [0,10].
Cada nota deve ser validada separadamente. Ao final, deve ser impressa a mensagem �novo
calculo? (1-sim 2-nao)�, solicitando ao usu�rio que informe um c�digo (1 ou 2), indicando se ele
deseja ou n�o executar o programa novamente. Se for informado o c�digo 1, deve ser repetida a
execu��o de todo o programa para permitir um novo c�lculo, se for informado o c�digo 2 o
programa deve ser encerrado.
*/
int main(){
    float n1,n2;
    int opc;
    do{
        do{
            printf("Me informe a nota do primeira avaliacao: ");
            scanf("%f", &n1);
        }while(n1 < 0 || n1 > 10);
        do{
            printf("Me informe a nota da segunda avaliacao: ");
            scanf("%f", &n2);
        }while(n2 < 0  || n2 > 10);

        printf("A media eh: %.2f\n", (n1+n2)/2);
        do{
            printf("Novo calculo? (1-sim 2-nao) ");
            scanf("%d",&opc);
            if (opc == 1){
                printf("Continuando...\n");
            }
            else if(opc == 2){
                printf("Programa finalizado!!!\n");
            }
            else{
                printf("Opcao invalida!!!\n");

                }
        }while(opc != 1 && opc != 2);
        }while(opc != 2);

    return 0;
}
