#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *criaMatriz(int l, int c)
{
    int **v;
    v = (int **)malloc(l * sizeof(int));
    if (v == NULL)
    {
        printf("Erro de alocação");
        exit;
    }
    else
    {
        for (int i = 0; i < c; i++)
        {
            v[i] = (int *)malloc(c * sizeof(int));
            if (v == NULL)
            {
                printf("Erro de alocação");
                exit;
            }
        }
    }
    return v;
}
void preencheInicial(int **vet, int l, int c)
{
    srand(time(NULL));
    for (int i = 0; i < l; i++)
    {
        vet[0][i] = rand() % 2;
    }
    for (size_t i = 0; i < c; i++)
    {
        vet[i][0] = rand() % 2;
    }
}
void preencheResto(int **vet, int l, int c)
{
    int i, j, soma;
    for (i = 1; i < l; i++)
    {
        for (j = 1; j < c; j++)
        {
            soma = vet[i - 1][j] + vet[i][j - 1] + vet[i - 1][j - 1];
            if (soma < 2)
            {
                vet[i][j] = 1;
            }
            else if (soma >= 2)
            {
                vet[i][j] = 0;
            }
        }
    }
}
void imprimeMatriz(int **vet, int l, int c)
{
    int i, j;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", vet[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int **vet, l, c, e;
    printf("Digite o tamanho do vetor : ");
    scanf("%d %d", &l,&c);
    vet = criaMatriz(l, c);
    preencheInicial(vet, l, c);
    preencheResto(vet, l, c);
    imprimeMatriz(vet, l, c);
    return 0;
}