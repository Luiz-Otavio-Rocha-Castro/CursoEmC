#include <stdio.h>
#include <stdlib.h>
        /*
                Operador l�gico ou (||)
                    TABELA VERDADE
                    A   B   A || B
                    V   V     V
                    V   F     V
                    F   V     V
                    F   F     F
                percebemos que so sera falso, quando as duas s�o falsas
        */
int main(){
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade <=5 || idade >= 60 )// a mesma ideia do &&
        printf("Tem direito a gratuidade!\n");
    else
        printf("Nao tem direito a gratuidade!\n");
    //perceba que � impossivel os dois casos serem verdade nesse caso

    return 0;
}
