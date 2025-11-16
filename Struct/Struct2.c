#include <stdio.h>
#include <stdlib.h>
/*
Passando uma struct como parametro
*/
typedef struct{
    int dia,mes,ano;
}DataNas;

typedef struct{
    DataNas nascimento;
    int idade;
    char sexo;
    char nome[100];
}Pessoa;
//Criando um procedimento para imprimir as informações
void imprimir_pessoa(Pessoa p){
    printf("\n\tNome: %s\n", p.nome);
    printf("\tIdade: %d\n", p.idade);
    printf("\tSexo: %c\n", p.sexo);
    printf("\tData de nascimento: %d/%d/%d\n", p.nascimento.dia, p.nascimento.mes, p.nascimento.ano);
}
//criando uma função que ler os dados de uma pessoa e retorna para quem chamou
Pessoa lerpessoa(){
    Pessoa pessoa;
    printf("Digite seu nome: ");
    scanf("%100[^\n]", pessoa.nome);
    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);
    printf("Digite seu sexo (m/f): ");
    scanf(" %c", &pessoa.sexo);
    printf("Digite sua data de nascimento no formato dd mm aaaa: ");
    scanf("%d%d%d", &pessoa.nascimento.dia, &pessoa.nascimento.mes, &pessoa.nascimento.ano);
    return pessoa;
}
int main(){
    Pessoa pessoa;
    pessoa = lerpessoa();
    imprimir_pessoa(pessoa);
    //vetor de struct
    Pessoa vetp[10];
    //matriz de struct
    Pessoa matp[3][5];
    return 0;
}
