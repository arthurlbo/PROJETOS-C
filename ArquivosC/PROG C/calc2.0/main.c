#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
/* Na original era por if e else. aula 29
    Refeito em switch. aula 31
*/
int main()
{
    setlocale (LC_ALL, "");

    float num1, num2, resultado, soma, sub, multi, div, med ;

    short int op = 0 ;

    num1=num2=resultado= 0 ;

    do
    {
        printf("\n\n (1) somar  \n");

        printf("\n (2) subtrair  \n");

        printf("\n (3) multiplicar  \n");

        printf("\n (4) dividir  \n");

        printf("\n (5) m�dia \n");

        printf("\n (0) sair \n ");

        printf("\n\n Digite a opera��o : ") ;
        scanf("%i", &op ) ;

    switch ( op ){

    case 1 :

        printf(" \n\n Digite o primeiro n�mero: ");
        scanf("%f", &num1) ;

        printf(" \n\n Digite o segundo n�mero: ");
        scanf("%f", &num2 );

        soma = num1 + num2 ;
        printf(" \n\n A soma � : %f \n\n", soma );

        system ("pause");
        system ("cls");
        break ;

    case 2 :

        printf(" \n\n Digite o primeiro n�mero: ");
        scanf("%f", &num1) ;

        printf(" \n\n Digite o segundo n�mero: ");
        scanf("%f", &num2 );

        sub = num1 - num2 ;
        printf("\n\n A subtra��o � : %f \n\n", sub );

        system ("pause");
        system ("cls");
        break ;

    case 3 :

        printf(" \n\n Digite o primeiro n�mero: ");
        scanf("%f", &num1) ;

        printf(" \n\n Digite o segundo n�mero: ");
        scanf("%f", &num2 );

        multi = num1 * num2 ;
        printf("\n\n  A multiplica��o � : %f \n\n", multi );

        system ("pause");
        system ("cls");
        break ;

    case 4 :

        printf(" \n\n Digite o primeiro n�mero: ");
        scanf("%f", &num1) ;

        printf(" \n\n Digite o segundo n�mero: ");
        scanf("%f", &num2 );

        div = num1 / num2 ;
        printf("\n\n A divis�o � : %f \n\n", div ) ;

        system ("pause");
        system ("cls");
        break ;

    case 5 :

        printf(" \n\n Digite o primeiro n�mero: ");
        scanf("%f", &num1) ;

        printf(" \n\n Digite o segundo n�mero: ");
        scanf("%f", &num2 );

        med = (num1 + num2) / 2 ;
        printf("\n\n A m�dia � : %f \n\n", med );

        system ("pause");
        system ("cls");
        break ;

    }

    }while(op != 0 ) ;

    return 0;

    }
