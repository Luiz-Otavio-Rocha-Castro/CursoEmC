#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Vamos ver como alterar o tamanho do nosso vet, usando realloc
int main(){
    int tam, *vet;
    srand(time(NULL));
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    vet = malloc(tam *sizeof(int));

    for(int i = 0; i<tam; i++)
        *(vet + i) = rand() % 100;
    for(int i = 0; i<tam; i++)
        printf("%d ",  *(vet + i));
    /*
        Perceba que um vetor a gente sempre viu ele como algo estatico, ou seja, se o tamanho dele fosse 10, era 10 e pronto
        Agora com alocação dinamica, funciona um pouco diferente, a gente pode realocar o nosso bloco que criamos com o malloc novamente
        ou seja, ele vai pegar o bloco e vai alocar ele em outro local com o tamanho diferente e mandar para o ponteiro, sem perder o conteudo que ja existe nesse bloco veja:
    */
    printf("\nDigite outro tamanho do vetor: ");
    scanf("%d", &tam);
    vet = realloc(vet, tam *sizeof(int));
    //Veja que ele precisou de dois parametros, o conteudo antigo para a gente nao perder e a nova quantidade de bytes que o bloco vai precisar para ser realocado;
    for(int i = 0; i<tam; i++)
        printf("%d ",  *(vet + i));

    //Vamos aproveitar e ver como liberar memoria, a partir do momento que a gente alocou uma memoria, a gente precisa liberar ela, apos a gente nao usar mais.
    //E para isso é muito simples, basta usar a função free()
    free(vet);

    return 0;
}
