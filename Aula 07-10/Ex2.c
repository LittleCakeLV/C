#include <stdio.h>
#include <math.h>
int calcula_raizes(float a, float b, float c, float *x1, float *x2)
{
    float delta;
    int flag;

    delta = b*b-(4*a*c);
    printf("%.2f\n", delta);
    if(delta==0)
    {
        *x1=(-b+sqrt(delta))/(2*a);
        flag=1;
    } else if (delta<0)
    {
        flag=0;
    }else if(delta>0)
    {
        *x1=(-b+sqrt(delta))/(2*a);
        *x2=(-b-sqrt(delta))/(2*a);
        flag=2;
    }
    return flag;
}
int main()
{
    float a, b, c, x1, x2;
    int flag;
    printf("Digite 3 valores: ");
    scanf("%f %f %f", &a, &b, &c);
    flag=calcula_raizes(a, b, c, &x1, &x2);
    if(flag==1)
    {
        printf("O valor da raiz e: %.2f", x1);
    } else if (flag==0)
    {
        printf("essa equacao nao tem raizes reais");
    }else if(flag==2)
    {
        printf("Os valores das raizes e: %.2f e %.2f", x1, x2);
    }
}
