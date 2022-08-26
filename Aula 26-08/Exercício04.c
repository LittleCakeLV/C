#include <stdio.h>

int main()
{
    int numero=0;
    char caracter;
    float real=0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("Digite um caracter: ");
    scanf(" %c", &caracter);
    printf("Digite um numero Real: ");
    scanf("%f", &real);
    printf("As variaves digitadas foram: %c, %d, %.2f.", caracter, numero, real);
    return 0;
}