#include <stdio.h>
#include <stdlib.h>
/*
 Como calcular o somat�rio de 1 at� n com recurs�o?
*/

int somatorio(int n){
    if(n == 1){
        return 1;
    }
    else{
        return(n + somatorio(n-1));
    }
}
int main(){
    int n;
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    printf("O somatorio de %d eh %d\n", n, somatorio(n));
    return 0;
}
