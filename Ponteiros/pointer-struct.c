#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int dia, mes, ano;
}Data;

void imprimirData(Data *x){
    printf("%d/%d/%d\n", x->dia, x->mes, x->ano);
}

int main(){

    Data data;
    Data *p;

    data.dia = 16;
    data.mes = 12;
    data.ano = 2006;

    p = &data;
    printf("data: %p\tp: %p\n", &data, p);

    printf("%d/%d/%d\n", data.dia, data.mes, data.ano);
    imprimirData(p);
    return 0;
}
