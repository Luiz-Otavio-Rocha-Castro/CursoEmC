#include <stdio.h>
#include <stdlib.h>

/*
8) Escreva um programa em C que funcione como uma calculadora. O programa deve apresentar
um menu ao usu�rio da seguinte forma:
1 � Somar
2 � Subtrair
3 � Multiplicar
4 � Dividir
0 � Sair

Uma estrutura do tipo switch deve ser utilizada para realizar cada opera��o em um case. Ap�s a
escolha da opera��o, dois valores devem ser pedidos ao usu�rio para realizar a opera��o escolhida.
Se a opera��o escolhida for a 4 o dividendo n�o pode ser zero, um novo valor deve ser solicitado. O
programa deve funcionar at� que o usu�rio escolha a op��o 0 (op��o de sa�da).

*/

int main()
{
    int opc;
    float num1, num2;
    do
    {
        printf("\tCalculadora\n");
        printf("1) Somar\n2) Subtrair\n3) Multiplicar\n4) Dividir\n0) Sair\nDigite sua opcao: ");
        scanf("%d", &opc);
        if (opc > 0 && opc < 5)
        {
            printf("Digite o primeiro valor: ");
            scanf("%f", &num1);
            printf("Digite o segundo valor: ");
            scanf("%f", &num2);
        }
        switch(opc)
        {
        case 1:
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case 4:
            while(num2 == 0)
            {
                printf("O dividendo nao pode ser zero!!!\n");
                printf("Digite o segundo valor novamente: ");
                scanf("%f", &num2);
            }
            printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            break;
        case 0:
            printf("Finalizado!!!\n");
            break;
        default:
            printf("Opcao invalida!!!\n");
        }
        printf("\n");
    }
    while(opc != 0);

    return 0;
}
