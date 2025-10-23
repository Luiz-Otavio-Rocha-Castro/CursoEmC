#include <stdio.h>
#include <stdlib.h>
/*
9) Um usuário deseja um programa onde possa escolher que tipo de média deseja calcular a partir
de três notas. Faça um programa que leia as notas e o tipo da média escolhida pelo usuário e calcule
a apresente a média:
Opções:
• ‘a’ - Aritmética.
• ‘p’ - Ponderada (pesos: 3,3,4).

*/
int main(){
    char opc;
    float n1,n2,n3, media;
    printf("Escolha sua opcao\n\'a\' - Aritmetica.\n\'p\' - Ponderada (pesos: 3,3,4).\nDigite: ");
    scanf("%c", &opc);
    if (opc == 'a' || opc == 'A'  || opc == 'p' || opc == 'P'  ){
        printf("Digite tres notas: ");
        scanf("%f%f%f", &n1,&n2,&n3);
    }
    switch(opc){
    case 'a':
    case 'A':
        media = (n1 + n2 + n3)/3;
        printf("Sua media aritimetica ficou: %.2f\n", media);
        break;
    case 'p':
    case 'P':
        media = (n1* 3 + n2 * 3 + n3 *4)/10;
         printf("Sua media ponderada ficou: %.2f\n", media);
        break;
    default:
        printf("Opcao invalida!!!\n");
    }

    return 0;
}
