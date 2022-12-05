#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIM 10;

int *criaVetor(int tam)
{
    int *v;
    v = (int *)malloc(tam * sizeof(int));
    if (v = NULL)
    {
        printf("Erro de alocação");
        exit;
    }
    return v;
}
void preencheVetor(int *v, int tam)
{
    printf("passou aqui, preenche%d\n", tam);
    int i;
    for (i = 0; i < tam; i++)
    {
        v[i] = rand() % LIM;
        printf("passou aqui, preenche\n");
    }
}
void imprimeVetor(int *vet, int tam)
{
    printf("passou aqui");
    for (size_t i = 0; i < tam; i++)
    {
        printf("%d ", vet[i]);
    }
}
int main()
{
    int tam1, tam2, *vet1, *vet2, *vet3, k = 0;
    srand(time(NULL));
    printf("Digite o tamano dos vetores separados por espaco: ");
    scanf("%d %d", &tam1, &tam2);
    vet1 = criaVetor(tam1);
    vet2 = criaVetor(tam2);
    vet3 = criaVetor(tam1 * tam2);
    preencheVetor(vet1, tam1);
    printf("passou aqui!!");
    preencheVetor(vet2, tam2);
    printf("passou aqui tambem!!");
    for (size_t i = 0; i < tam1; i++)
    {
        for (size_t j = 0; j < tam2; j++)
        {

            vet3[k] = vet1[i] * vet2[j];
            k++;
        }
    }
    imprimeVetor(vet1, tam1);
    imprimeVetor(vet2, tam2);
    imprimeVetor(vet3, tam1 * tam2);
}