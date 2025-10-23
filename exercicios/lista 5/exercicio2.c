//verificando se uma frase eh palíndroma
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char frase[100], frase_copia[100];
    int i= 0 , j = 0, cont = 0;
    printf("Digite uma frase: ");
    scanf("%100[^\n]", frase);
    strupr(frase);
    //Removendo caracteres especiais
    while (i < strlen(frase)){
        if(frase[i] > 64 && frase[i] < 91){
            frase_copia[j] = frase[i];
            j++;
        }
        i++;
    }
    //Verifica se palindroma ou n
    j = 0;
    for (i = strlen(frase_copia) - 1; i >= 0; i--){
        if (frase_copia[i] != frase_copia[j])
            cont++;
        j++;
    }
    if(cont == 0)
        printf("A frase -> \"%s\" eh palindroma\n", frase);
    else
        printf("A frase -> \"%s\" nao eh palindroma\n", frase);
    return 0;
}
