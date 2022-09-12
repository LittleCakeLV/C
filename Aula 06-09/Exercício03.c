#include <stdio.h>

int main()
{
    int x, y, i, soma;
    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);
    soma = 0;
    for (size_t i = y+1; i < x; i++)
    {
        if (i%2 != 0)
        {
            soma++;
        }
    }
    printf("%d", soma);
    return 0;
}
