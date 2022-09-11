/*Modifique o programa anterior para que imprima qual dos dois é maior 
ou se são iguais(perímetro ou área).ser iguais.*/

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
    else if (perimetro<area)
    {
        printf("area e maior que o perimetro");
    }
    else
    {
        printf("As duas medidas sao iguais");
    }
    return 0;
}