#include <stdio.h>
#include <stdlib.h>
#include <string.h>//Algumas fun��es so funciona no windows, como strupper() e strlower()
#include <ctype.h>//Outra biblioteca para string, ele pode ser usado em qualquer sistema op

//Volte aqui depois de voce ter visto oq eh um procedimento e uma fun��o

void maisculo(char str[]){
    int i;
    while(str[i] != '\0'){
        str[i] = toupper(str[i]);//Essa fun��o vai deixar todo caracter em maisculo!!!
        i++;
    }
}
void minusculo(char str[]){
     int i;
    while(str[i] != '\0'){
        str[i] = tolower(str[i]);//Essa fun��o vai deixar todo caracter em minusculo!!!
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
Basicamente, existe uma op��o global de alterar nossa string, deixando ela maiscula ou minuscula.
E essa alternativa, se torna necessario o uso de procedimentos, utilizando a fun��o touppper e tolower
dentro do la�o de repeti��o, modificando ent�o, caracter por caracter!!!

*/
