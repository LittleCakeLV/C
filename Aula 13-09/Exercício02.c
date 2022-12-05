#include <stdio.h>

int main()
{
    int x = 0, cont, y;
    float media = 0;
    printf("Digite um valor, se quiser parar digite -1000: ");
    scanf("%d", &y);
    while (y != -1000)
    {
        if (y > 0)
        {
            cont++;
            media = media + y;
        }
        printf("Digite um valor, se quiser parar digite -1000: ");
        scanf("%d", &y);
    }
    media = media / cont;
    printf("Foram digitados %d valores positivos e a media entre eles eh %.2f", cont, media);
    return 0;
}
