#include <stdio.h>

int main ()
{
    float n1 , n2 , aux ;

    printf ("Digite o primeiro valor : ");
    scanf ("%f", &n1);
    printf ("Digite o segundo valor : ");
    scanf ("%f", &n2);
    aux=n1+n2;
    printf ("O primeiro valor eh: %.2f\n", n1 );
    printf ("O segundo valor eh: %.2f\n", n2 );
    printf ("A soma dos valores eh: %.2f", aux );
    return 0;
}