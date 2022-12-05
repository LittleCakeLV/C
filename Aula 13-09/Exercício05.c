#include <stdio.h>

int main()
{
    float ze = 1.1, chico = 1.5;
    int cont=0;
    while (chico>ze)
    {
        ze = ze + 0.03;
        chico = chico + 0.02;
        cont++;
    }
    printf("demorou %d anos para ze ser maior que chico", cont);
    return 0;
}