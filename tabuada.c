#include <stdio.h>

int main()
{
    int numero, i, y, t;

    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    printf("At� qual tabuada quer multiplicar: ");
    scanf("%d", &t);

    printf("\nTabuada do %d:\n", numero);
    for(i = 1; i <= t; i++) {                  //primeiro la�o: define at� qual tabuada

        printf("%d x %d = %d\n", numero, i, numero * i );  //imprime o resultado da tabuada

        printf("\n");

        for(y = 1; y <= 10; y++) {            //segundo la�o: define at� qual n�mero a tabuada do n�mero definido pelo primeiro la�o ir� multiplicar

            printf("%d x %d = %d\n", y, i, i * y);     // imprime o resultado final com todas as tabuadas

        }
    }

}
