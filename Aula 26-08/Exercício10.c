#include <stdio.h>

int main()
{
    int raio;
    float res;

    printf("Digite um valor para o raio da esfera: ");
    scanf("%d", &raio);
    res=(4.00/3)*3.14159*raio*raio*raio;
    printf("O volume da esfera eh: %.6f", res);
}