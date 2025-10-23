#include <stdio.h>
#include <stdlib.h>
/*
16) Faça um programa para jogar o jogo da velha. Ao final imprima o resultado do jogo e pergunte
se deseja jogar novamente.
*/
int main(){
    int opc;
    do{
        char mat[3][3] = {' '}, venceu = 'n'; //variavel venceu sendo usada como controle para caso de vitoria -> n de nao
        int x,y, i, j, cont = 0, verificaX = 0, verificaO = 0;

        printf("\n\t\tJOGO DA VELHA\n");
        printf("\n\t\t0 0| 0 1 | 0 2\n\t\t--------------\n\t\t1 0| 1 1 | 1 2\n\t\t--------------\n\t\t2 0| 2 1 | 2 2\n\n");
        printf("Para jogar eh bem simples, voce precisa digitar a casa corresponde a posicao que voce deseja\nExemplo: desejo jogar no meio, entao eu digito 1 1, segue as localizacoes acima!!!\n");
        do{
            if(cont % 2 == 0){
                printf("\nJOGADOR 1 SUA VEZ!\n");
                printf("\nInforme a posicao que voce deseja jogar: ");
                scanf("%d%d", &x,&y);
                //verifica se a casa esta preenchida
                while(mat[x][y] == 'X' || mat[x][y] == 'O'){
                    printf("\nJOGADOR 1 SUA VEZ!\nPOSICAO QUE VOCE COLOCOU JA ESTA PREENCHIDA!!!\nESCOLHA OUTRA CASA PARA CONTINUAR O JOGO\n");
                    printf("\nInforme a posicao que voce deseja jogar: ");
                    scanf("%d%d", &x,&y);
                }
                //verifica se o usario digitou o intervalo correto
                while(x > 2 || x < 0 || y > 2 || y < 0){
                    printf("\nJOGADOR 1 SUA VEZ!\nPOSICAO QUE VOCE COLOCOU NAO EXISTE!!!\nESCOLHA OUTRA CASA PARA CONTINUAR O JOGO\n");
                    printf("\nInforme a posicao que voce deseja jogar: ");
                    scanf("%d%d", &x,&y);
                }
                mat[x][y] = 'X';
                cont += 1;
            }
            else{
                printf("\nJOGADOR 2 SUA VEZ!\n");
                printf("\nInforme a posicao que voce deseja jogar: ");
                scanf("%d%d", &x,&y);
                //verifica se a casa esta preenchida
                while(mat[x][y] == 'X' || mat[x][y] == 'O'){
                    printf("\nJOGADOR 2 SUA VEZ!\nPOSICAO QUE VOCE COLOCOU JA ESTA PREENCHIDA!!!\nESCOLHA OUTRA CASA PARA CONTINUAR O JOGO\n");
                    printf("\nInforme a posicao que voce deseja jogar: ");
                    scanf("%d%d", &x,&y);
                }
                 //verifica se o usario digitou o intervalo correto
                while(x > 2 || x < 0 || y > 2 || y < 0){
                    printf("\nJOGADOR 2 SUA VEZ!\nPOSICAO QUE VOCE COLOCOU NAO EXISTE!!!\nESCOLHA OUTRA CASA PARA CONTINUAR O JOGO\n");
                    printf("\nInforme a posicao que voce deseja jogar: ");
                    scanf("%d%d", &x,&y);
                }
                mat[x][y] = 'O';
                cont += 1;
            }

            //testando por linhas
            i = 0;
            if (cont >= 5){
                if (venceu == 'n'){
                    while(i<3 && verificaX != 3 && verificaO != 3){
                        verificaX = 0;
                        verificaO = 0;
                        for(j = 0; j < 3; j++){
                                if(mat[i][j] == 'X'){
                                    verificaX++;
                                }
                                else if(mat[i][j] == 'O'){
                                     verificaO++;
                                }
                            }
                         i++;
                        }
                    }
                    if(verificaX == 3 || verificaO == 3){
                        venceu = 's';
                    }
                //testando por colunas
                i = 0;
                if (venceu == 'n'){
                    while(i<3 && verificaX != 3 && verificaO != 3){
                        verificaX = 0;
                        verificaO = 0;
                        for(j = 0; j < 3; j++){
                                if(mat[j][i] == 'X'){
                                    verificaX++;
                                }
                                else if(mat[j][i] == 'O'){
                                     verificaO++;
                                }
                            }
                         i++;
                        }
                    if(verificaX == 3 || verificaO == 3){
                        venceu = 's';
                    }
                    }
                //testando diagonal principal
                i = 0;
                if (venceu == 'n'){
                    verificaX = 0;
                    verificaO = 0;
                    while(i<3 && verificaX != 3 && verificaO != 3){
                        for(j = 0; j < 3; j++){
                            if(j == i){
                                if(mat[i][j] == 'X'){
                                    verificaX++;
                                }
                                else if(mat[i][j] == 'O'){
                                     verificaO++;
                                }
                            }
                         }
                        i++;
                        }
                    if(verificaX == 3 || verificaO == 3){
                        venceu = 's';
                        }
                    }
                //testando diagonal secundaria
                if (venceu == 'n'){
                    verificaX = 0;
                    verificaO = 0;
                    j = 2;
                    for (i = 0; i < 3; i++){
                        if(mat[i][j] == 'X'){
                            verificaX++;
                        }
                        else if(mat[i][j] == 'O'){
                            verificaO++;
                        }
                        j--;
                    }
                    if(verificaX == 3 || verificaO == 3){
                        venceu = 's';
                        }
                }
            }
            //imprimir jogo
            printf("\n\n");
            for(i = 0; i < 3; i++){
                printf("\t\t");
                for (j = 0; j < 3; j++){
                    if(mat[i][j] == 'X' || mat[i][j] == 'O'){
                        if(j<2)
                            printf(" %c |", mat[i][j]);
                        else
                            printf(" %c ", mat[i][j]);}
                    else
                         if(j<2)
                            printf("   |" );
                         else
                            printf("  " );

                }
                if(i<2)
                    printf("\n\t\t-----------\n");
            }
            printf("\n\n");

            //Em caso de empate
            if (cont == 9 && venceu == 'n'){
                venceu = 's';
                printf("O jogo empatou!!!\n");
            }
        }while(venceu == 'n');

        if(verificaX == 3)
            printf("APOS %d JOGADAS, O JOGADOR 1 VENCEU\n", cont);

        else if(verificaO == 3)
             printf("APOS %d JOGADAS, O JOGADOR 2 VENCEU\n", cont);

        printf("\tDESEJA JOGAR NOVAMENTE?\n1 - CONTINUAR\n2 - FINALIZAR\nDigite sua opcao: ");
        scanf("%d", &opc);
    }while(opc != 2);
    return 0;
  }
