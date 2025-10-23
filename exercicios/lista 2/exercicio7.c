#include <stdio.h>
#include <stdlib.h>
/*
7) Faça um programa que peça ao usuário um caracter e diga se é uma vogal ou não.
*/

int main(){
    char letra;
    printf("Digite uma letra: ");
    scanf("%c",&letra);
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra =='u'){
        printf("SUA LETRA E UMA VOGAL!!\n");
    }
    else if (letra == 'A' || letra == 'B' || letra == 'C' || letra == 'O' || letra =='U'){
        printf("SUA LETRA E UMA VOGAL!!\n");
    }
    else{
        printf("SUA LETRA E UMA CONSOANTE!!!\n");
    }

    return 0;
}
