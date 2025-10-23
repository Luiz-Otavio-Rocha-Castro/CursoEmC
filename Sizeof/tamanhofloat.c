#include  <stdio.h>
#include  <stdlib.h>

//vamos descobrir  o tamanho  de um  float  na memoria

int  main(){
    float x = 3.1415;
    printf("O tamanho do tipo float e %d bytes\n" , sizeof x);
    // lembrando que o tipo float é armazenado na memoria de forma diferente do inteiro

    //vamos dar uma olhada em como funciona o tipo double, ele é outro tipo de trabalhar com reais
    long double y = 3.1415434353534335;
    /*Agora você deve estar se perguntando, quando usaremos double?
    primeiro temos que entender que o double consegue armazenar numeros reais extensos com maior precisao
    do que o float, no caso do PI, por exemplo, ja o float tem uma precisao simples, enquanto o double,
    como o proprio nome ja menciona, tem precisão dupla.
    %lf - quando for se referir ao double
    */
    printf("Um long double necessita de %d bytes de memoria.\n", sizeof y);
    // por isso não faz sentido a existencia de um long float, ja que o double precisa de justamente o dobro de bytes

    printf("Valor de y: %.10Lf\n", y);//linux / macos
    __mingw_printf("Valor de y: %.10Lf\n", y);// Windows
    /*
        Notamos que podemos usar o long double, ele ficara com 16 bytes, porem sua forma de representar
        ele muda, nao podemos mais usar o %lf, no caso de sistemas operacionais como Mac ou Linux, basta
        voce usar %Lf, mas no windows é um pouco diferente precisamos usar a função do compilador:
                                            __mingw_printf()

    */


    return 0;
}
