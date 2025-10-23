#include <stdio.h>
#include <stdlib.h>
/*
18) Foi feita uma pesquisa entre os habitantes de uma região e foram coletados os dados de idade,
sexo (M/F) e salário de X pessoas (x deve ser informado pelo usuário). Faça um algoritmo que
informe:
a) a média de salário do grupo;
b) a maior e a menor idade do grupo;
c) a quantidade de mulheres com salário até R$2000,00.
*/
int main(){
    int qnt_pessoas, idade, maior, menor, cont_F = 0, i;
    float salario, soma_salario = 0;
    char sexo;
    printf("Me informe a quantidade de pessoas: ");
    scanf("%d", &qnt_pessoas);
    for (i=1; i<=qnt_pessoas; i++){
        printf("Informe a idade da pessoa: ");
        scanf("%d", &idade);
        printf("Informe o sexo(M/F) da pessoa: ");
        scanf(" %c", &sexo);
        printf("Informe o salario da pessoa: ");
        scanf("%f", &salario);
        //a
        soma_salario+=salario;
        //b
        if(i==1){
            maior = idade;
            menor = idade;
        }
        else if(idade>maior){
            maior = idade;
        }
        else if(idade<menor){
            menor = idade;
        }
        //c
        if((sexo == 'f' || sexo == 'F') && salario <=2000 ){
            cont_F+=1;
        }
        printf("\n");
    }
    printf("A media de salario do grupo eh: R$%.2f\n", soma_salario/qnt_pessoas);
    printf("A maior idade eh: %d e a menor idade eh: %d\n", maior,menor);
    printf("A quantidade de mulheres com salario ate R$2000: %d\n", cont_F);

    return 0;
}
