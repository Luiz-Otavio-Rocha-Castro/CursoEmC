#include <stdio.h>
#include <stdlib.h>
/*
Como calcular o en�simo termo da sequ�ncia de FIBONACCI com recurs�o?
*/
int Fibonnaci(int termo){
    if (termo == 1){
        return 0;
    }
    else if(termo == 2){
        return 1;
    }
    else{
         return (Fibonnaci(termo - 1) + Fibonnaci(termo - 2));
    }
}

int main(){
    int termo;
    printf("Informe o termo maior q 0 que vc deseja descobrir o fibonnaci: ");
    scanf("%d", &termo);
    printf("O fibonacci do termo %d: %d\n", termo, Fibonnaci(termo));
    return 0;
}
