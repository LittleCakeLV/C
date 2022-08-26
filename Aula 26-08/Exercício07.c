#include <stdio.h>

int main()
{
    int aux;
    float real;

    printf("Digite um numero inteiro: ");
    scanf("%d", &aux);
    real=aux*1.00;
    printf("O valor digitado eh: %.2f", real);
}