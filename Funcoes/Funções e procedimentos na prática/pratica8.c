#include <stdio.h>
#include <stdlib.h>
/*
Como converter um número decimal em binário?
*/
void binario(int num){
    if(num == 0){
        printf("%d", num);
    }
    else{
        binario(num/2);
        printf("%d", num % 2);
    }
}

int main(){
    int n;
    printf("Digite um valor decimal: ");
    scanf("%d",&n);
    binario(n);

    return 0;
}
