#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");

    int num1, num2 = 0;

        printf("Digite dois n�meros inteiros : \n");
        scanf("%i %i", &num1, &num2 );

    if(num1 % num2 == 0){

        printf("\nO n�mero %i � divisivel pelo n�mero %i !", num1, num2 );

    }else{

        printf("\nO n�mero %i n�o � divisivel pelo n�mero %i !", num1, num2 );
    }

    return 0;
}
