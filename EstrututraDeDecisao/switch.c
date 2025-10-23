#include <stdio.h>
#include <stdlib.h>
        //Estrutura de seleção - switch case
        /*
        Mas qual a diferença??
        se voce estiver precisando de uma verificar igualdades, o switch vai ser uma otima escolha,
        veja o exemplo a seguir!
        */
int main(){
    int opcao;
    printf("1 - Cadastrar produto\n2 - Vender produto\n3 - Buscar produto\n4 - Imprimir\n5 - Sair\nDigite sua opcao: ");
    scanf("%d", &opcao);

    /*Veja que voce poderia usar o if nesse caso, mas como a gente vai trabalhar com igual, o switch vai
    ser mais facil*/
    switch(opcao){
    case 1:// o case seria a comparaçao opcao == 1
        printf("\nCadastrando novo produto.\n");
        break;//quebrar, caiu no case, ele vai executar ate chegar no break
        //e quando cair no break, ele vai parar de executar os outros caso!!, por isso ele é importante
    case 2:
        printf("\nVendendo um novo produto.\n");
        break;
    case 3:
        printf("\nBuscando um novo produto!\n");
        break;
    case 4:
        printf("\nImprimindo Relatorio.\n");
        break;
    case 5:
        printf("\nSaindo...\n");
        break;

    //mas se o usuario nao digitar nenhum numero dos casos?
    //podemos usar o default, para esse caso
    default:
        printf("\nOpcao invalida!\n");
        //veja que nao precisa do break, pq ele so vai ser executado, se nenhum caso for acionado
    //todo case precisa de um break!!!
    }


//vamos ver como fazer o case com caracteres, basicamente a mesma ideia, so muda alguns detalhes veja
    char opcao2;
    printf("\na - Cadastrar produto\nb - Vender produto\nc - Buscar produto\nd - Imprimir\ne - Sair\nDigite sua opcao: ");
    scanf(" %c", &opcao2);
    switch(opcao2){
    case 'a':
    // o case seria a comparaçao opcao == a, lembre-se sempre de colocar '' no caracter para nao achar que e uma varivael
        printf("\nCadastrando novo produto.\n");
        break;
    case 'b':
        printf("\nVendendo um novo produto.\n");
        break;
    case 'c':
        printf("\nBuscando um novo produto!\n");
        break;
    case 'd':
        printf("\nImprimindo Relatorio.\n");
        break;
    case 'e':
        printf("\nSaindo...\n");
        break;
    default:
        printf("\nOpcao invalida!\n");
    }








    return 0;
}
