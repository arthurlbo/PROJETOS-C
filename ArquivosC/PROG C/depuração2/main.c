#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "") ;

        printf("Digite o seu usu�rio : \n");

    char c ;
        c = getchar () ;

    if(c == '1' )
    {
        printf("\n Usu�rio correto ! \n") ;

    }else{
        printf("\n Usu�rio incorreto. \n") ;

        printf("\n O usu�rio digitado foi: -->%c<--- \n", c ) ;
    }

    return 0;
}
