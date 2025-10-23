#include <stdio.h>
#include <stdlib.h>
/*
26) Escreva um programa para ler as notas da primeira e da segunda avaliação de um aluno. Calcule
e imprima a média semestral. O programa deverá aceitar apenas notas válidas no intervalo [0,10].
Cada nota deve ser validada separadamente. Ao final, deve ser impressa a mensagem “novo
calculo? (1-sim 2-nao)”, solicitando ao usuário que informe um código (1 ou 2), indicando se ele
deseja ou não executar o programa novamente. Se for informado o código 1, deve ser repetida a
execução de todo o programa para permitir um novo cálculo, se for informado o código 2 o
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
