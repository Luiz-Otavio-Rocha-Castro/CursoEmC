#include <stdio.h>
#include <stdlib.h>

/*
23) Escreva um programa que gere a saída abaixo.
Restrições:
→ A instrução “printf” pode ser utilizada no máximo 2 vezes;
→ O \n para saltar linha pode ser utilizado no máximo 2 vezes.
*
**
***
****
*****
******
*******
********
*/
int main(){
    int i,j, n;
    printf("Digite um valor: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for (j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    /*Como seria se quisessimos imprimir o triangulo ao contrario:
            *
           **
          ***
         ****

    */
   printf("\n\n");
    for(i=1; i<=n; i++){
        for(j = i; j<n; j++){
            printf(" ");
        }
        for (j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }



    return 0;
}
