#include <stdio.h>
#include <stdlib.h>
/*
16) Fa�a um programa para encontrar o menor n�mero inteiro que seja divis�vel por todos os
n�meros inteiros entre 1 e 10.
*/
int main(){
    int cont = 0, i,num = 1 ;
    while (cont<10){
        for(i=1;i<=10;i++){
            if (num%i==0){
                cont+=1;
            }
        }
        if (cont!=10){
            cont = 0;
            num+=1;
        }

    }
    printf("O menor numero divisivel por todos os numeros inteiros entre 1 e 10 eh: %d\n", num);

    return 0;
}
