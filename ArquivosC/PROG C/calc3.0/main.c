#include <stdio.h>

#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");

    float num1, num2, resultado, soma, sub, multi, div, med ;

    short int op = 0;

    do
    {

        printf("\n (1) somar  \n");

        printf("\n (2) subtrair  \n");

        printf("\n (3) multiplicar  \n");

        printf("\n (4) dividir  \n");

        printf("\n (5) m�dia \n");

        printf("\n (0) sair \n ");

        printf("\n\n Digite a opera��o : ") ;
        scanf("%i", &op ) ;

    if( op != 0 ){

        printf(" \n\n Digite o primeiro n�mero: ");
        scanf("%f", &num1) ;

        printf(" \n\n Digite o segundo n�mero: ");
        scanf("%f", &num2 );

        soma = num1 + num2;
        sub = num1 - num2 ;
        multi = num1 * num2;
        div = num1 / num2 ;
        med = (num1 + num2) / 2;

        resultado = (op == 1)? soma, printf("\n A soma � : %f\n\n", soma ):
                    (op == 2) ? sub, printf("\n A subtra��o � : %f\n\n", sub):
                    (op == 3) ? multi, printf("\n A multiplica��o  � : %f\n\n", multi):
                    (op == 4) ? div, printf("\n A divis�o � : %f\n\n", div):
                    (op == 5) ? med, printf("\n A m�dia  � : %f\n\n", med):
                    (op == 0) ;

        system ("pause");
        system("cls") ;

    }

    }while(op != 0 ) ;

    return 0;
}
