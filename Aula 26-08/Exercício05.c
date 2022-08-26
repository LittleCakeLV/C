#include <stdio.h>

int main()
{
    int i1=0, i2=0, divis=0, rest=0;
    printf("Digite dois valores: ");
    scanf("%d%d", &i1, &i2);
    divis=i1/i2;
    rest=i1%i2;
    printf("O Resultado da divisao eh: %d e o resto da divisao eh: %d", divis, rest);
}