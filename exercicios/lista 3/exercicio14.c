#include <stdio.h>
#include <stdlib.h>
/*
14) Fa�a um programa que calcule a m�dia de sal�rios de uma empresa, pedindo ao usu�rio a
quantidade de funcion�rios e o sal�rio de cada funcion�rio. Ao final, o programa deve imprimir a
m�dia dos sal�rios informados, o sal�rio mais alto e o sal�rio mais baixo.
*/
int main(){
    int qnt_fun, i;
    float salario, soma_salario = 0, maior, menor;
    do{
        printf("Me informe a quantidade de funcionarios na sua empresa: ");
        scanf("%d",&qnt_fun);
    }while(qnt_fun < 0);
    for(i=1; i<=qnt_fun; i++){
        printf("Digite %d o salario do funcinario: ", i);
        scanf("%f", &salario);
        soma_salario += salario;
        if (i == 1){
            maior = salario;
            menor = salario;
        }
        else if(salario > maior){
            maior = salario;
        }
        else if(salario<menor){
            menor = salario;
        }
    }
    printf("A media salarial da sua empresa eh R$%.2f\n", soma_salario/qnt_fun);
    printf("O maior salario da sua empresa eh R$%.2f\n", maior);
    printf("O menor salario da sua empresa eh R$%.2f\n", menor);
    return 0;
}
