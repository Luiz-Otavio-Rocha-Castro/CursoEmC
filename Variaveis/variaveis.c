#include <stdio.h>

/*
    primeiro temos que entender oq seria variavel???
        � uma regi�o de memoria que a gente utiliza para guardar valores
Para criar uma variavel em c precisamos definir seu tipo e nome
    ex : int valor;
obs : para criar o nome da variavel existe algumas regras, entre elas temos:
    n�o pode come�ar com numeros ou caracteres especiais
    nao pode ter espa�o, ex: salario minimo
    nao pode ter acentos
    nao pode ter duas com o mesmo nome

*/

int main(){
    int valor;
    int valor2;
    // na minha variavel posso fazer uma atribui��o ou seja dar um valor � ela
    valor = 50;
    //como imprimir uma variavel
    printf("\nValor da minha variavel: %d\n\n", valor);

    // e se eu quiser que o usuario digite o valor da minha vari�vel??
    printf("\nDigite um valor inteiro: ");
    scanf("%d", &valor2);
    printf("\nValor da minha variavel: %d\n\n", valor2);
    /* Vamos la com calma, primeiro ponto a gente vai pedir pro usario, em seguida usando o comando scanf
    dentro do scanf %d significa inteiro e & � usado para localizar o nosso local de memoria para salvar esse
    valor
    */

    //vamos fazer a mesma coisa, agora com numeros reias - float, double
    float numero = 3.1415;
    // para numeros reais usamos %f, outra dica � formatar o numero de casa, basta apos a % colocar . num de casa
    printf("Valor da minha variavel: %.4f\n", numero);
    // e se eu quiser que o usuario digite o valor da minha var   i�vel??
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
