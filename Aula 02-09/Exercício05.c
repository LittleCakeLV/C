#include <stdio.h>
int main()
{
    float A, G, Ra, Rg;
    printf("Digite o preco do Alcool e da Gasolina respectivamente\n");
    scanf("%f %f", &A, &G);
    printf("Digite o rendimento do Alcool e da Gasolina respectivamente\n");
    scanf("%f %f", &Ra, &Rg);
    if (Ra / Rg <= A / G)
    {
        printf("G");
    }
    else
        printf("A");

    return 0;
}