#include <stdio.h>

int main()
{
    int C, valor, cont;
    printf("Digite o consumo de agua da residencia\n");
    scanf("%d", &C);
    valor = 7;
    if (C > 10)
    {
        if (C > 30)
        {
            valor = valor + 20;
            if (C > 100)
            {
                valor = valor + 140;
                cont = C - 100;
                valor = valor + cont * 5;
                printf("O valor da conta de agua da residencia e: %d", valor);
            }
            else
            {
                cont = C - 30;
                valor = valor + cont * 2;
                printf("O valor da conta de agua da residencia e: %d", valor);
            }
        }
        else
        {
            cont = C - 10;
            valor = valor + cont;
            printf("O valor da conta de agua da residencia e: %d", valor);
        }
    }
    else
    {
        printf("O valor da conta de agua da residencia e: %d", valor);
    }

    return 0;
}