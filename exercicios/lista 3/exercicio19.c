#include <stdio.h>
#include <stdlib.h>
/*
19) Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de
pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence. O algoritmo
será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem
escrever mensagem alguma).
Exemplo de entrada:
2 2
3 -2
-8 -1
-7 1
0 2
Exemplo de saída:
primeiro
quarto
terceiro
segundo

*/
int main(){
    int x,y;
    do{
        printf("Digite a coordenada de X e Y: ");
        scanf("%d%d", &x,&y);
        if(x>0 && y>0){
            printf("primeiro quadrante\n");
        }
        else if(x<0 && y>0){
            printf("segundo quadrante\n");
        }
        else if(x<0 && y<0){
             printf("terceiro quadrante\n");
        }
        else if(x>0 && y<0){
             printf("quarto quadrante\n");
        }
    }while(x != 0 && y != 0);


    return 0;
}
