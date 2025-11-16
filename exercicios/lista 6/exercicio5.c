#include <stdio.h>
#include <stdlib.h>

/*
    Implemente a função strcpy (char *destino, char *origem) usando ponteiros.

*/

void copia(char * destino, char * origem){
    int i = 0;
    while(*(origem + i) != '\0'){
        *(destino + i) = *(origem + i);
        i++;
    }
    *(destino + i) = *(origem + i);
}

int main(){
    char nome1[20] = "Ola mundo", nome2[20] = "Olavo";
    printf("Antes da copia:\n%s\t%s\n", nome1, nome2);
    copia(nome1, nome2);
    printf("Depois da copia:\n%s\t%s\n", nome1, nome2);

    return 0;
}
