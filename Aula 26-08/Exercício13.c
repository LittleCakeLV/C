#include <stdio.h>

int main()
{
    int dist;
    float combustivel, res;

    printf("Digite a distancia e a quantidade de combustivel gasto: ");
    scanf("%d%f", &dist, &combustivel);
    res=dist/combustivel;
    printf("O Consumo medio do automovel em questao eh: %.3f Km/L", res);
}