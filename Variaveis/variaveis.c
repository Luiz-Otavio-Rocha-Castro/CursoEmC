#include <stdio.h>

/*
    primeiro temos que entender oq seria variavel???
        é uma região de memoria que a gente utiliza para guardar valores
Para criar uma variavel em c precisamos definir seu tipo e nome
    ex : int valor;
obs : para criar o nome da variavel existe algumas regras, entre elas temos:
    não pode começar com numeros ou caracteres especiais
    nao pode ter espaço, ex: salario minimo
    nao pode ter acentos
    nao pode ter duas com o mesmo nome

*/

int main(){
    int valor;
    int valor2;
    // na minha variavel posso fazer uma atribuição ou seja dar um valor à ela
    valor = 50;
    //como imprimir uma variavel
    printf("\nValor da minha variavel: %d\n\n", valor);

    // e se eu quiser que o usuario digite o valor da minha variável??
    printf("\nDigite um valor inteiro: ");
    scanf("%d", &valor2);
    printf("\nValor da minha variavel: %d\n\n", valor2);
    /* Vamos la com calma, primeiro ponto a gente vai pedir pro usario, em seguida usando o comando scanf
    dentro do scanf %d significa inteiro e & é usado para localizar o nosso local de memoria para salvar esse
    valor
    */

    //vamos fazer a mesma coisa, agora com numeros reias - float, double
    float numero = 3.1415;
    // para numeros reais usamos %f, outra dica é formatar o numero de casa, basta apos a % colocar . num de casa
    printf("Valor da minha variavel: %.4f\n", numero);
    // e se eu quiser que o usuario digite o valor da minha var   iável??
    printf("\nDigite um valor real: ");
    scanf("%f", &numero);
    printf("\nValor da minha variavel: %.4f\n\n", numero);

    //vamos para agora com string
    char sexo = 'F';
    //obs : sempre que for atribuir um valor ao char, coloca-lo em apostulos

    printf("O valor da variavel sexo: %c\n", sexo);

    printf("Digite seu sexo: (f,F,m,M)  ");
    scanf("%c", &sexo);
    printf("Valor da variavel sexo: %c\n", sexo);




    return 0;
}
