#include <stdio.h>

int main()
{
    int a = 20;  //Endereço de a = 0x61ff1c
    int *p;      
    p = &a;
    printf("Valor da variavel eh: %d e o endereco eh: 0x%x\n", *p, &a);
    printf("O endereco da variavel eh: 0x%x ", &p);
    return 0;
}