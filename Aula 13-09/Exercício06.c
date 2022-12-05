#include <stdio.h>
#include <stdlib.h>>

int main()
{
    int num, resp, tent = 0;
    num = (rand() % 500) + 1;
    printf("Um numero entre 1 e 500 foi sorteado, tente adivinhar qual ele eh: ");
    scanf("%d", &resp);
    tent++;
    while (resp != num)
    {

        if (resp > num)
        {
            printf("O numero digitado eh maior que o valor sorteado");
        }
        else if (resp < num)
        {
            printf("O numero digitado eh menor que o valor sorteado");
        }
        printf("\ntente novamente: ");
        scanf("%d", &resp);
        tent++;
    }
    if (tent <= 3)
    {
        printf("Voce acertou !!! \\o/");
    }
    else if (tent <= 6)
    {
        printf("Voce acertou !!! :-D");
    }
    else if (tent <= 10)
    {
        printf("Voce acertou !!! :-)");
    }
    else if (tent > 10)
    {
        printf("Voce acertou !!! :-\\ ");
    }
    return 0;
}