#include <stdio.h>
#include <math.h>

int main()
{
    int A, B, C;
    printf("Digite tres medidas\n");
    scanf("%d %d %d", &A, &B, &C);
    if (C <= A + B && C >= abs(A - B) &&  A>= abs(B-C) && A<=B+C && B>=abs(A-C) && B<=A+B)
    {
        if (A != B && A != C && B != C)
        {
            printf("Esses valores formam um triangulo escaleno");
        }
        else if (A == B && A == C && B == C)
        {
            printf("Esses valores formam um triangulo equilatero");
        }
        else if (A == B || A == C || B == C)
        {
            printf("Esses valores formam um triangulo isoceles");
        }
    }
    else
    {
        printf("Esses valores nao formam um triangulo");
        
    }

    return 0;
}
