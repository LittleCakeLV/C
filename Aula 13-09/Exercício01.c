#include <stdio.h>

int main()
{
    int y, aux=0;
    printf("Digite um valor, se quiser parar digite um numero negativo:\n");
    scanf("%d", &y);
    while (y>=0)
    {
        aux=(y+aux+abs(y-aux))/2;
        printf("Digite um valor, se quiser parar digite um numero negativo:\n");
        scanf("%d", &y);
        
    }
    printf("o maior numero digitado eh: %d", aux);
    return 0;
}
