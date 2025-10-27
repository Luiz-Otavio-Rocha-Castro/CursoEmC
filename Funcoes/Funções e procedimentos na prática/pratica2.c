#include <stdio.h>
#include <stdlib.h>
/*
    Vamos fazer um função recursiva para calcular o 
    fatorial de um numero

*/ 
//Como vamos retornar um valor - vamos usar função

int Recursiva(int n){
    if (n == 1 || n == 0){
        return 1;
    }
    else{
        return n * Recursiva(n - 1);
    }
}

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Fatorial: %d\n", Recursiva(num));

    return 0;
}

/*
Explicando a função recursiva(fatorial): 
fatorial de 5: Vamos tentar entender oq ta acontecendo na nossa função
Ao mandar o valor 5 para a função, ele vai fazer o teste, 5 é igual a 0
ou 1? Não. 
então ele vai entrar no else e vai tentar retornar o 5 * 4!, mas eu 
ainda não sei qual o valor do meu 4 fatorial, então ele chama a função
novamente, mas dessa vez com o valor 4, e faz o mesmo teste, como o 4 nao 
se bate com o if, ele novamente vai tentar retornar o 4 * 3!.
Mas ai eu te pergunto novamente, eu sei qual é o 3 fatorial? Não
Novamente vamos nos, chamo a função, como 3 ainda nao eh 1 ou 0, novamente ele vai la e faz, 
3 * 2!
Novamente, eu chamo a função, faço o primerio teste, que denovo não vai ser verdade, então eu tento
retorna 2 * 1!, agora em 1 fatorial, ele entra no if, ja que 1 == 1(verdade), e retorna para gente 
o valor 1.
Ta, mas eai?
-> Você lembra q apos ele chegar na condição de parada, o computador vai desempilhar todas 
funções, ou seja vamos supor que nesse exemplo a função foi chamada 5 vezez(obs: sem cotabilizar
as chamadas na funçaõ principal), a partir da ultima chamada, vamos partir para a penultima, 
 ate que o computador retorne para a primeira vez que foi chamada a função recursiva
 : 
 Quinta chamada -> retornou um 1 para a quarta chamada
 quarta chamada -> vai calcular 2 * 1 e retornar esse valor para a terceira chamada
 terceira chamada -> vai calcular 3 * 2 e retornar para a segunda chamada
 segunda chamada - > vai calcular 4 * 6 e retornar para a primeira chamada
 primeira chamada -> vai calcular 5 * 24 e retornar para a chamada da função principal

 veja que realmente ficou parecendo uma pilha, sendo o topo a ultima chamada e a base a primeira
 chamada


*/