#include <stdio.h>
#include <stdlib.h>
/*
10) Faça um programa que, dado três valores a, b e c, verifique se eles podem ser os comprimentos
dos lados de um triângulo. Caso positivo, seu programa deve informar também se o triângulo é
equilátero, isósceles ou escaleno. Caso contrário, seu programa deve escrever a mensagem “Não
formam um triângulo”.

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
