#include <stdio.h>

int main()
{
    int valor;
    float Faren;

    printf("Digite a temperatura em celsius para que seja convertido em Farenheit\n");
    scanf("%d", &valor);
    Faren=((9*valor)/5.00)+32;
    printf("O resultado da conversao eh: %.2f F", Faren);
}