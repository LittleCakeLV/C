#include <stdio.h>

int main()
{
    int x, y, i, soma, res;
    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);
    res = x - y;
    soma = 0;
    for (size_t i = 0; i < res; i++)
    {
        if ((i+1)%2 != 0)
        {
            soma++;
            printf("%d\n", soma);
        }
    }
    printf("%d", soma);
    return 0;
}
