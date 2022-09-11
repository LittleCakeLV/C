#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, media;
    char op;
    printf("Digite 3 valores diferentes de zero: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("Digite a letra correspondente para a operacao que deseja efetuarz\n");
    printf("A = Media Aritmetica\n");
    printf("P = Media Ponderada com pesos 1, 2, 3 para o primeiro, segundo e terceiro valor digitado, respectivamente\n");
    printf("G = Media Geometrica\n");
    printf("H = Media Harmonica\n");
    scanf(" %c", &op);
    if (op == 'A' || op == 'a')
    {
        media = (a + b + c) / 3.00;
        printf("A media aritmetica simples eh: %.2f", media);
    }
    else if (op == 'p' || op == 'P')
    {
        media = (a + b * 2 + c * 3) / 6;
        printf("A media ponderada eh: %.2f", media);
    }
    else if (op == 'G' || op == 'g')
    {
        media = cbrt(a * b * c);
        printf("A media geometrica eh: %.2f", media);
    }
    else if (op == 'H' || op == 'h')
    {
        media = 3 / ((1 / a) + (1 / b) + (1 / c));
        printf("A media harmonica eh: %.2f", media);
    }
    else
    {
        printf("Opcao incorreta");
    }
    return 0;
}
