#include <stdio.h>

int main()
{
    int valor, div1, div2, div3;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    div1=valor/50;
    div2=(valor%50)/5;
    div3=(valor%50)%5;
    printf("o valor %d pode ser reprensentado por: %d notas de R$50, %d notas de R$5 e %d notas de R$1", valor, div1, div2, div3);
}