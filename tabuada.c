#include <stdio.h>

int main()
{
    int numero, i, y, t;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("Até qual tabuada quer multiplicar: ");
    scanf("%d", &t);

    printf("\nTabuada do %d:\n", numero);
    for(i = 1; i <= t; i++) {                  //primeiro laço: define até qual tabuada

        printf("%d x %d = %d\n", numero, i, numero * i );  //imprime o resultado da tabuada

        printf("\n");

        for(y = 1; y <= 10; y++) {            //segundo laço: define até qual número a tabuada do número definido pelo primeiro laço irá multiplicar

            printf("%d x %d = %d\n", y, i, i * y);     // imprime o resultado final com todas as tabuadas

        }
    }

}
