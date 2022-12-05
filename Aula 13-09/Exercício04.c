#include <stdio.h>

int main()
{
    int n1, n2, res = 1, mult2, x = 0, cont = 0;
    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);
    while (x != 1)
    {
        if (n1 % 2 == 0 && n2 % 2 == 0)
        {
            n1 = n1 / 2;
            n2 = n2 / 2;
            res = 2 * res;
        }else if (n2 % 2 == 0)
        {
            n2 = n2 / 2;
            res = 2 * res;
        }else if (n1 % 2 == 0)
        {
            n1 = n1 / 2;
            res = 2 * res;
        }
        if (n1 % 3 == 0 && n2 % 3 == 0)
        {
            n1 = n1 / 3;
            n2 = n2 / 3;
            res = 3 * res;
        }else if (n2 % 3 == 0)
        {
            n2 = n2 / 3;
            res = 3 * res;
        }else if (n1 % 3 == 0)
        {
            n1 = n1 / 2;
            res = 3 * res;
        }
        if (n1 % 5 == 0 && n2 % 5 == 0)
        {
            n1 = n1 / 5;
            n2 = n2 / 5;
            res = 5 * res;
        }else if (n2 % 5 == 0)
        {
            n2 = n2 / 5;
            res = 5 * res;
        }else if (n1 % 5 == 0)
        {
            n1 = n1 / 5;
            res = 5 * res;
        }
       if (n1 % 7 == 0 && n2 % 7 == 0)
        {
            n1 = n1 / 7;
            n2 = n2 / 7;
            res = 7 * res;
        }else if (n2 % 7 == 0)
        {
            n2 = n2 / 7;
            res = 7 * res;
        }else if (n1 % 7 == 0)
        {
            n1 = n1 / 7;
            res = 7 * res;
        }
        if (n1 % 11 == 0 && n2 % 11 == 0)
        {
            n1 = n1 / 11;
            n2 = n2 / 11;
            res = 11 * res;
        }else if (n2 % 11 == 0)
        {
            n2 = n2 / 11;
            res = 11 * res;
        }else if (n1 % 11 == 0)
        {
            n1 = n1 / 11;
            res = 11 * res;
        }
        if (n1==1 && n2==1)
        {
            x = 1;
        }
        
    }
    printf("%d", res);
    return 0;
}