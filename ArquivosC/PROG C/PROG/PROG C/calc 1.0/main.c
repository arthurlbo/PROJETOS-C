#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale (LC_ALL, "") ;

    float num1, num2, soma , sub , multi , div, med ;

        printf("\t\t\t\tCALCULADORA\t\t\t\t\n\n");

        printf("Digite o primeiro n�mero:\n");
        scanf("%f", &num1 );

        printf("Digite o segundo n�mero :\n");
        scanf("%f", &num2);

        soma = num1 + num2 ;
        sub= num1 - num2 ;
        multi= num1 * num2 ;
        div= num1 / num2 ;
        med = (num1 + num2) / 2 ;

        printf("A soma � : %f\n\n", soma);
        printf("A subtra��o � : %f \n\n", sub);
        printf("A multiplica��o  � : %f\n\n", multi);
        printf("A divis�o � : %f\n\n", div );
        printf("A m�dia � : %f\n\n ", med) ;

    return 0;
}
