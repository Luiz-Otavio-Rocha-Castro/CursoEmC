#include <stdio.h>
#include <stdlib.h>
/*
25) Escreva um programa que leia dois valores X e Y. A seguir, mostre uma sequ�ncia de 1 at� Y,
passando para a pr�xima linha a cada X n�meros.
Exemplo de entrada:
3 99
Exemplo de sa�da:
1 2 3
4 5 6
7 8 9
10 11 12
...
97 98 99
*/
int main(){
    int x , y,i,cont = 1 ;
    printf("Digite dois valores: ");
    scanf("%d%d", &x,&y);
    while(cont<=y){
    for(i=1; i<=x; i++){
        if (cont<=y){
            printf("%3d ", cont++);
        }
    }
    printf("\n");
    }


}
