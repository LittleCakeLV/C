#include <stdio.h>
void questao01(int *a, int *b)
{
    *a=*a-1;
    *b=*b+1;
}
int main()
{
    int a, b;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);
    questao01(&a, &b);
    printf("%d %d", a, b);
}
