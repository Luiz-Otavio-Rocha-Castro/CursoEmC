#include <stdio.h>
#include <stdlib.h>
/*
10) Fa�a um programa que, dado tr�s valores a, b e c, verifique se eles podem ser os comprimentos
dos lados de um tri�ngulo. Caso positivo, seu programa deve informar tamb�m se o tri�ngulo �
equil�tero, is�sceles ou escaleno. Caso contr�rio, seu programa deve escrever a mensagem �N�o
formam um tri�ngulo�.

*/
int main(){
    float a,b,c;
    printf("Digite tres comprimentos: ");
    scanf("%f%f%f", &a,&b,&c );
    if(a+b>c && a+c>b && b+c>a){
        if (a == b && b == c){
            printf("Ele forma um triangulo equilatero\n");
        }
        else if(a != b && b!=c && c!=a){
             printf("Ele forma um triangulo escaleno\n");
        }
        else{
             printf("Ele forma um triangulo isoceles\n");
        }
    }
    else{
        printf("Nao forma um triangulo");
    }


    return 0;
}
