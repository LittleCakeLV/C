#include <stdio.h>

int main()
{
    int n, i, rest;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for (size_t i = 0; i < 100; i++)
    {
        rest = (i + 1) % n;
        if (rest == 2)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}