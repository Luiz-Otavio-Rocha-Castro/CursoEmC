#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    int dia,mes,ano;

}dataNas;

//como criar uma struct ou seja novos tipos de dados, assim a gente vai evitar a criação de varias variaveis
typedef struct{
    dataNas nascimento;//USando uma struct dentro de outra struct, mas eu preciso criar ela antes
    int idade;
    char sexo;
    char nome[100];
}Pessoa;
/*Criamos um novo tipo de variavel, chamado, tipo pessoa, onde dentro dele, a gente vai ter tipos
primitivos, struct nada mais eh do que uma caixa
*/


int main(){
    Pessoa pessoa;//Agora aqui criamos uma variavel do tipo pessoa

    //atribuindo valores na struct
    pessoa.idade = 35;
    pessoa.sexo = 'f';
    strcpy(pessoa.nome, "Maria");//lembresse que nao podemos atribuir normalmente uma var string
    //precisamos usar o strcpy.

    //imprimindo
    printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa.nome, pessoa.idade, pessoa.sexo);

    //lendo os dados do teclado..
    printf("Digite seu nome: ");
    scanf("%100[^\n]", pessoa.nome);
    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);
    printf("Digite seu sexo (m/f): ");
    scanf(" %c", &pessoa.sexo);
    printf("Digite sua data de nascimento no formato dd mm aaaa: ");
    scanf("%d%d%d", &pessoa.nascimento.dia, &pessoa.nascimento.mes, &pessoa.nascimento.ano);
    printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa.nome, pessoa.idade, pessoa.sexo);
    printf("Data de nas: %d/%d/%d\n", pessoa.nascimento.dia, pessoa.nascimento.mes, pessoa.nascimento.ano);

    return 0;
}
