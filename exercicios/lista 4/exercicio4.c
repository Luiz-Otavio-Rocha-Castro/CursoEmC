#include <stdio.h>
#include <stdlib.h>
/*

4) Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos
diferentes. O vendedor recebe um salário de R$1100,00 acrescido de 5% do valor total de suas
vendas. O valor unitário dos objetos deve ser informado e armazenado em um vetor; a quantidade
vendida de cada objeto deve ficar em outro vetor, mas na mesma posição. Crie um programa que
receba os preços e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois,
determine e mostre:
a) A quantidade vendida, valor unitário e valor total de cada objeto. Ao final, deverão ser mostrados
o valor total das vendas e o valor da comissão que será paga ao vendedor.
b) O valor do objeto mais vendido e sua posição no vetor (em caso de empates mostre todos
empatados).
*/

int main(){
    float precos[10], totalvendas = 0, comissao;
    int i, vendas[10], maisvendido = 0;
    printf("Informe o preco de cada produto da loja e quantos foram vendidos\n");
    for (i = 0; i < 10; i++){
        printf("Produto %d:\n->Preco: ", i);
        scanf("%f", &precos[i]);
        printf("->Quantidade de vendas deste produto: ");
        scanf("%d", &vendas[i]);
        //aproveitei o for inicial para comecar a fazer o item b
        if(vendas[i] > maisvendido){
            maisvendido = vendas [i];
        }
    }
    printf("\n\n");
    //A
    for (i = 0; i < 10; i++){
        printf("O produto %d de valor R$%.2f:\n->Total de vendas: %d\n->Total do produto: %.2f\n\n", i+1, precos[i], vendas[i], precos[i] *  vendas[i]);
        totalvendas += precos[i] *  vendas[i];
    }
    printf("->TOTAL DE VENDAS: %.2f\n", totalvendas);

    comissao = totalvendas * 5 / 100;
    printf("\n->COMISSAO DO VENDEDOR: %.2f\n\n", comissao);

    //B
    int cont = 0;
    printf("Produtos mais vendidos:");
    for (i = maisvendido; i<10; i++){
        if(vendas[i] == maisvendido){
            printf("\n->Item %d de valor %.2f\n->Quantidade de vendas: %d\n\n", i, precos[i], vendas[i]);
        }

    }





    return 0;
}
