// Vemos verificar se uma string eh pal�ndroma
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavra[30];
    int i = 0, j, cont = 0;
    printf("Digite uma palavra: ");
    scanf("%30[^\n]", palavra);
    for(j = strlen(palavra) - 1; j >= 0; j--){
        if(palavra[i++] == palavra[j])
            cont+=1;
    }
    if(cont == strlen(palavra))
        printf("A palavra: %s eh palindroma", palavra);
    else
        printf("A palavra: %s nao eh palindroma", palavra);
    

    return 0;
}




