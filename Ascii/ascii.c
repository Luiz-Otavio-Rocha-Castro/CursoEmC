#include <stdio.h>
#include <stdlib.h>
#include <locale.h>// primeiro passo para resolver o problema é chamar outra biblioteca
int main(){
    /*Vamos resolver o problema dos caracteres especiais no windows, percebe-se que ao utilizar um
    sempre vai aparecer algo estranho, mas se fosse no linux funcionaria perfeitamente. Isso ocorre por
    conta da tabela ascii, essa tabela cada caractere é representado por um numero, porem o computador usa
    a tabela antiga, onde nao existe acentuação ou outros caracteres especiais
    */
    setlocale(LC_ALL,"Portuguese");//segundo passo é usar essa função que vai subistituir as configurações de localização
    printf("coração");
    return 0;
}
