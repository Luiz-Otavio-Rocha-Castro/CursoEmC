#include <stdio.h>
#include <stdlib.h>

/*
12) Para uma turma de 45 alunos, construa um algoritmo que determine:
a) A idade média dos alunos com menos de 1,70m de altura;
b) A altura média dos alunos com mais de 20 anos.

*/
int main(){
    float soma_altura = 0, altura , soma_idade = 0;
    int idade, cont_alt = 0 , cont_id = 0, i;
    for (i=1; i<=4; i++){
        printf("Digite a altura em metros e a idade do aluno: ");
        scanf("%f%d", &altura, &idade);
        if (altura < 1.70){
            soma_idade += idade;
            cont_id += 1;
        }
        if (idade > 20){
            soma_altura += altura;
            cont_alt += 1;
        }

    }
    printf("A) A idade media dos alunos com menos de 1,70m de altura eh: %.2f\n", soma_idade/cont_id);
    printf("B) A altura media dos alunos com mais de 20 anos eh: %.2f\n", soma_altura/cont_alt);


    return 0;
}
