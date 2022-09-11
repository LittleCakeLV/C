/*Leia 2 valores reais (x e y), os quais representam as coordenadas de um ponto em um plano. A seguir, determine a
qual quadrante pertence o ponto. Analise também se está sobre um dos eixos cartesianos ou na origem (x = y = 0).
Para auaxiliar a resoluação do exercícico, a figura abaixo ilustra os quatro quadrantes no plano cartesiano X * Y , como
primeiro quadrante iniciando no canto superior direito, o segundo no canto superior esquerdo e assim por diante*/

#include <stdio.h>

int main()
{
    float X, Y;
    printf("Digite duas coordenadas, X e Y respectivamente: ");
    scanf("%f%f", &X, &Y);
    if (X > 0 && Y > 0)
    {
        printf("Estas coordenadas estao no primeiro quadrante");
    }
    else if (X < 0 && Y > 0)
    {
        printf("Estas coordenadas estao no segundo quadrante");
    }
    else if (X < 0 && Y < 0)
    {
        printf("Estas coordenadas estao no terceiro quadrante");
    }
    else if (X > 0 && Y < 0)
    {
        printf("Estas coordenadas estao no quarto quadrante");
    }
    else if (X == 0 && Y == 0)
    {
        printf("Estas coordenadas estao na origem");
    }
    else if (Y == 0)
    {
        printf("Estas coordenadas estao no eixo X");
    }
    else if (X == 0)
    {
        printf("Estas coordenadas estao no eixo Y");
    }

    return 0;
}
