#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale (LC_ALL, " " );

    int taboada,x ;

    printf("=================================TABOADA========================================");

    printf(" \n\n Digite o n�mero que voc� deseja : ") ;
    scanf("%i", &x );

    printf(" \n\nDigite a taboada que voc� deseja : ");
    scanf("%i", &taboada );

    while( x <= taboada ) {

    printf("%i x %i", x, taboada,  x * taboada );

    ++x ;

    }

    return 0;
}
