#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1, v2, v3;
    int res_parc, res;

    printf("Digite tres numeros inteiros: ");
    scanf("%d%d%d", &v1, &v2, &v3);
    res_parc=(v1+v2-abs(v1-v2))/2;
    res=(res_parc+v3-abs(res_parc-v3))/2;
    printf("O valor maximo entre os tres eh: %d", res);
}