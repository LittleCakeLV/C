#include <stdio.h>

int main()
{
    int dist, pedag;
    float res;
    printf("Digite a distancia e a quantidade de pedagios: ");
    scanf("%d%d", &dist, &pedag);
    res=((dist/15.00)*5.60)+(pedag*8);
    printf("O gasto total da viagem foi: R$ %.2f", res);
}