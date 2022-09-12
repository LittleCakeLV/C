#include <stdio.h>

int main()
{
    int n, i;
    float x, y, z, media;
    printf("Digite o numero de casos testes a serem feitos: ");
    scanf("%d", &n);
    for (size_t i = 0; i < n; i++)
    {
        printf("Digite tres valores para a media ponderada: ");
        scanf("%f %f %f", &x, &y, &z);
        media = (x * 2.0 + y * 3.0 + z * 5.0) / 10;
        printf("%.2f\n", media);
    }
    return 0;
}