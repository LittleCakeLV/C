#include <stdio.h>

int main()
{
    int valor, res;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    res=valor%10;

    printf("O ultimo digito do valor digitado eh: %d", res);
}