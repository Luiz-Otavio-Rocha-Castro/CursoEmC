#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Nesse arquivo eu quero demonstrar na pr�tica a diferen�a entre uma fun��o e um procedimento

*/

//Vamos fazer um procedimentos para imprimir uma string -> caracter por caracter
void imprimirString(char str[]){
//Void indica que estamos fazendo um procedimento, pois o void nao retorna nada
//Lembrando que os parametros pode ser qualquer nome!!!
    int i = 0;
    while(str[i] != '\0'){
        printf("%c\n", str[i]);
        i++;
    }
    //Veja que n�o sera necessario retornar nada!!!
}


int main(){
    char vet[20] = {"Olavo Henrique!!!"};
    imprimirString(vet);

    return 0;
}
