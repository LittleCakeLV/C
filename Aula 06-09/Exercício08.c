#include <stdio.h>

int main()
{
    int a, b, prod, soma, i;
    for (size_t i = 1000; i < 9999; i++)
    {
        a = i / 100;
        b = i % 100;
        soma = a + b;
        prod = soma * soma;
        if (prod == i)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}