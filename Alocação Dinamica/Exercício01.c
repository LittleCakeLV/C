#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *criaVetor(int tam, int lim)
{
    int *v;
    v = (int *)malloc(tam * sizeof(int));
    if (v == NULL)
    {
        printf("Erro de alocação");
        exit;
    }
    else
    {
        return v;
    }
}
int *expandeVetor(int *v, int tam, int n, int lim)
{
    int *v2, i;
    v2 = (int *)malloc((tam + n) * sizeof(int));
    if (v2 == NULL)
    {
        printf("Erro de alocação");
        exit;
    }
    else
    {
        for (i = 0; i < tam; i++)
        {
            v2[i] = v[i];
        }
        for (i = tam; i < tam + n; i++)
        {
            v2[i] = rand() % lim;
        }
        free(v);
        return v2;
    }
}
void preencheVetor(int *vet, int tam, int lim)
{
    srand(time(NULL));
    for (size_t i = 0; i < tam; i++)
    {
        vet[i] = rand() % lim;
    }
}
void imprimeVetor(int *vet, int tam)
{
    for (size_t i = 0; i < tam; i++)
    {
        printf("%d ", vet[i]);
    }
}
int main()
{
    int *vet, tam, lim, e;
    printf("Digite o tamanho do vetor e o valor limite que o vetor pode ter: ");
    scanf("%d %d", &tam, &lim);
    vet = criaVetor(tam, lim);
    preencheVetor(vet, tam, lim);
    imprimeVetor(vet, tam);
    printf("\nDigite quantos espacos deseja expandir o vetor: ");
    scanf("%d", &e);
    vet = expandeVetor(vet, tam, e, lim);
    tam = tam + e;
    imprimeVetor(vet, tam);
    return 0;
}