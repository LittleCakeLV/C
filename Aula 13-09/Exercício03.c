#include <stdio.h>

int main()
{
    int senha=0;
    while (senha != 2002)
    {
        printf("Digite a senha: ");
        scanf("%d", &senha);
        if (senha == 2002)
        {
            printf("Senha correta");
        }
        else
        {
            printf("Senha incorreta\n");
        }
    }

    return 0;
}
