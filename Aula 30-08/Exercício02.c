/*Faça um programa que tendo como entradas (via teclado) a base e altura de um retângulo, calcule o perímetro (2*base
+ 2*altura) e a área (base*altura) e imprima se o perímetro é maior que a área.*/

#include <stdio.h>

int main()
{
    float base, altura, perimetro, area;
    printf("Digite o valor da Base e depois o da Altura: ");
    scanf("%f%f", &base, &altura);
    perimetro=(base*2 + altura*2);
    area=base*altura;
    if (perimetro>area)
    {
        printf("Perimetro e maior que a area");
    }
    return 0;
}