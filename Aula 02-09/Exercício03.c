#include <stdio.h>
#include <math.h>

int main()
{
    int n1, cent, deze, unid, compara;
    printf("Digite um numero que fique entre 100 e 999\n");
    scanf("%d", &n1);
    if (n1 >= 100 && n1 <= 999)
    {
        unid = n1 % 10;
        deze = (n1 / 10) % 10;
        cent = ((n1 / 10) / 10) % 10;
        compara = pow(unid, 3)+pow(deze, 3)+pow(cent, 3);
        if (n1 == compara)
        {
            printf("Esse e um numero armstrong");
        }
        else
            printf("Nao e um numero armstrong");
    }
    else
        printf("Erro, numero fora do intervalo");

    return 0;
}