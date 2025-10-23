#include <stdio.h>
#include <stdlib.h>
    //lendo varios valores usando apenas um scanf
int main(){
    float num1, num2, num3;
    printf("Digite tres valores reais: ");
    scanf("%f%f%f", &num1,&num2, &num3);

    printf("Valores lidos: %.2f, %.2f e %.2f\n", num1, num2 , num3);

    return 0;
}
