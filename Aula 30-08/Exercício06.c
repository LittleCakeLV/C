/*. Faça um programa que dados os coeficientes (a,b e c) de uma equação do 2o grau,
calcule e imprima suas raízes*/

#include <stdio.h>
#include <math.h>

int main()
{
    float delta, x1, x2;
    int a, b, c, teste;
    printf("Digite os valores dos coeficientes da equacao do segundo grau: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("%d %d %d\n", a, b, c);
    teste = (4 * a * c);
    delta = (b * b) - teste;
    if (delta < 0)
    {
        printf("Raiz dessa equacao e imaginaria");
    }
    else if (delta == 0)
    {
        x1 = -b / (2.00 * a);
        printf("A unica raiz dessa equacao e: %.2f", x1);
    }
    else if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2.00 * a);
        x2 = (-b - sqrt(delta)) / (2.00 * a);
        printf("As raizes dessa equacao sao: x1 = %.2f e x2 = %.2f", x1, x2);
    }
    return 0;
}