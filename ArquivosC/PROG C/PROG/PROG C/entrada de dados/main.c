#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale (LC_ALL, "");

    int num1, num2 ;

        printf("Digite o primeiro n�mero:");
        scanf("%i", &num1 );

        printf("Digite o segundo n�mero:");
        scanf("%i", &num2 ) ;

        printf("O primeiro numero �: %i\n", num1);
        printf("O segundo n�mero �: %i\n", num2);

    return 0;
}
