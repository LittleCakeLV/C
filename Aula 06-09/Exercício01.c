#include <stdio.h>

int main()
{
    int n1, i;
    printf("Digite um numero para ser impresso a tabuada: ");
    scanf("%d", &n1);
    for (size_t i = 0; i <= 9; i++)
    {
        printf("%d Vezes %d eh igual a: %d\n", n1, i+1, n1*(i+1));
    }
    return 0;
}