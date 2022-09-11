#include <stdio.h>
#include <math.h>

int main()
{
    int A, B, C, H, L, min_caixa, parc_min, max_caixa, parc_max, min_jan, max_jan;
    printf("Digite as tres medidas da embalagem\n");
    scanf("%d %d %d", &A, &B, &C);
    printf("Digite as medidas da janela\n");
    scanf("%d %d", &H, &L);

    parc_max = (A + B + abs(A - B)) / 2;
    max_caixa = (parc_max + C + abs(parc_max - C)) / 2;
    
    parc_min = (A + B - abs(A - B)) / 2;
    min_caixa = (parc_min + C - abs(parc_min - C)) / 2;
    min_jan = (H + L - abs(H - L)) / 2;
    max_jan = (H + L + abs(H - L)) / 2;
    if (max_jan >= 1 && max_jan <= 100 && max_caixa >= 1 && max_caixa <= 100 && min_jan>=1 && min_jan<=100 && min_caixa>=1 && min_caixa<=100)
    {
        if (min_caixa == A)
        {

            if (min_caixa <= min_jan && (B <= max_jan || C <= max_jan))
            {
                printf("S");
            }
            else
            {
                printf("N");
            }
        }else if (min_caixa == B)
        {
            if (min_caixa <= min_jan && (A <= max_jan || C <= max_jan))
            {
                printf("S");
            }
            else
            {
                printf("N");
            }
        }else if (min_caixa == C)
        {
            if (min_caixa <= min_jan && (A <= max_jan || B <= max_jan))
            {
                printf("S");
            }
            else
            {
                printf("N");
            }
        }
        
        
    }
}
