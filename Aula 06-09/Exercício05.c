#include <stdio.h>

int main()
{
    int n, i, soma = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    if (n >= 0)
    {
        for (size_t i = 1; i <= n/2; i++)
        {
            if (n%i == 0)
            {
                soma = i + soma;
            }
        }
        if (soma == n)
        {
            printf("o numero %d e perfeito", n);
        }else{
            printf("o numero %d nao e perfeito", n);
        }
    }
    else
        printf("numero invalido");

    return 0;
}