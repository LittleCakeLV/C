#include <stdio.h>

int main()
{
    int n, i, x = 0, y = 1, aux;
    printf("digite um valor: ");
    scanf("%d", &n);
    printf("0 1 ");
    for (size_t i = 1; i < (n-2); i++)
    {
        aux = x + y;
        x = y;
        y = aux;
        printf("%d ", aux);
    }
    return 0;
}
