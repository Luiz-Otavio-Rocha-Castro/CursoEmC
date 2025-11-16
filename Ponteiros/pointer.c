#include <stdio.h>
#include <stdlib.h>
void imprimir(int *num){
    printf("Valor de num: %d\n", *num);
    *num = 80;
    //Com isso, eu consigo alterar os conteudos da minha variavel sem precisar retornar.
}


int main(){
    int num = 10;
    printf("Valor de num: %d\n", num);
    printf("Endereco de num: %p\n", &num);//Cada variavel possui um endereco de memoria e esse endereco e unico

    /*
    Ponteiro pode ser entendido como seta, ele armazena o endereco de memoria
    */
    //Criando um ponteiro
    int *p;//um ponteiro aponta para uma regiao de memoria, que guarda um valor inteiro

    p = &num;
    printf("Valor de p: %p\n", p);
    printf("Endereco de p: %p\n", &p);
    printf("Valor apontado por p: %d\n", *p);

    //quanto de memoria ocupa um ponteiro
    printf("%d bytes\n", sizeof(p));

    //passando um ponterio como parametro
    //imprimir(num); veja que nesse caso base, eu so passo o conteudo da minha variavel
    //Com os ponteiros agora, vamos conseguir passar algo semelhante a refencia da minha variavel - vulgo seu endereco
    imprimir(&num);
    printf("Valor de num: %d\n", num);



    return 0;
}
