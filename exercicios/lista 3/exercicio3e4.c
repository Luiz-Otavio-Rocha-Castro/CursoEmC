#include <stdio.h>
#include <stdlib.h>
/*
3) Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
4) Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
Restrição:
→ O bloco de repetição deve executar no máximo 500 vezes.
*/
int main(){
    int i, soma = 0;
    printf("Questao_3\n");
    for (i=1; i<1001; i++){
       if (i%2 == 1){
            soma += i;
       }
    }
    printf("%d\n", soma);
    
    printf("Questao_4\n");    
    soma = 0;
    for(i=1; i<1001; i+=2){
        soma += i;
    }
    printf("%d\n", soma);
    return 0;
}