#include <stdio.h>
#include <stdlib.h>
/*
8) Elabore um programa que, dado o número do mês, indica quantos dias têm esse mês. Utilize para
isso a estrutura de seleção switch.
Obs.: Considere fevereiro como tendo 28 dias.

*/
int main(){
    int mes;
    printf("Digite o numero do mes: ");
    scanf("%d",&mes);
    switch(mes){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Seu mes tem 31 dias\n");
        break;
    case 2:
        printf("Seu mes tem 28 dias\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("Seu mes tem 30 dias\n");
        break;
    default:
        printf("Mes invalido!!!\n");



    }

    return 0;
}
