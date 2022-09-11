#include <stdio.h>

int main()
{
    int X, Y;
    printf("Digite as coordenadas X e Y respectivamente em que a bola tocou o chao\n");
    scanf("%d %d", &X, &Y);
    if (X >= 0 && X <= 432 && Y >= 0 && Y <= 468)
    {
        printf("D");
    }
    else
        printf("F");

    return 0;
}
