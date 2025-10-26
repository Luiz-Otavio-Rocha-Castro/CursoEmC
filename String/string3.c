#include <stdio.h>
#include <stdlib.h>
#include <string.h>//Algumas funções so funciona no windows, como strupper() e strlower()
#include <ctype.h>//Outra biblioteca para string, ele pode ser usado em qualquer sistema op

//Volte aqui depois de voce ter visto oq eh um procedimento e uma função

void maisculo(char str[]){
    int i;
    while(str[i] != '\0'){
        str[i] = toupper(str[i]);//Essa função vai deixar todo caracter em maisculo!!!
        i++;
    }
}
void minusculo(char str[]){
     int i;
    while(str[i] != '\0'){
        str[i] = tolower(str[i]);//Essa função vai deixar todo caracter em minusculo!!!
        i++;
    }
}
int main(){
    char str[] = "Ola. bom dia.";
    printf("String original: %s\n", str);
    maisculo(str);
    printf("String maiuscula: %s\n", str);
    minusculo(str);
    printf("String minuscula: %s\n", str);
    return 0;
}
/*
Basicamente, existe uma opção global de alterar nossa string, deixando ela maiscula ou minuscula.
E essa alternativa, se torna necessario o uso de procedimentos, utilizando a função touppper e tolower
dentro do laço de repetição, modificando então, caracter por caracter!!!

*/
