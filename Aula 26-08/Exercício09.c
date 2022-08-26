#include <stdio.h>

int main()
{
    int base=0, altura=0;

    printf("Digite a base e a altura de um retangulo: ");
    scanf("%d%d", &base, &altura);
    printf("O perimetro do retangula eh: %d", (2*base+2*altura));
}