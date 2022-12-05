#include <stdio.h>
int divide(int *m, int *n, int d)
{
    if(*m/d >= 1 || *n/d >= 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int mmc(int m, int n)
{

}
int main()
{
    int d, m, n,res;
    printf("Digite tres numeros:  ");
    scanf("%d %d %d", &d, &m, &n);
    res=divide(&m, &n, d);

}
