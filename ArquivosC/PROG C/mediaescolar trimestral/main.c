#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "") ;

    float nota1, nota2, nota3, med ;

        printf("========M�DIA ESCOLAR TRIMESTRAL========\n\n");

        printf("Digite sua primeira nota : \n");
        scanf("%f", &nota1);

        printf("Digite sua segunda nota : \n");
        scanf("%f", &nota2);

        printf("Digite sua terceira nota : \n");
        scanf("%f", &nota3) ;

        med = (nota1+nota2+nota3) / 3 ;
        printf("A sua m�dia foi de : %f \n\n", med);

    if( med >= 60)
        {
            printf("Voc� foi aprovado ! \n");

    }else
        {
            printf("Voc� foi reprovado ! \n");

        }

    return 0;
}
