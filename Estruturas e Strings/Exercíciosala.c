#include <stdio.h>

typedef struct
{
    float cr;
    char nome[22];
    int mat;
} Estudante;
void preenche(Estudante *aux)
{
    int i = 0;
    printf("Digite o nome do aluno: ");
    fgets(aux->nome, 20, stdin);
    while (aux->nome[i] != '\n') i++;
    aux->nome[i] = '\0';
    printf("Digite o numero de matricula: ");
    scanf("%d", &aux->mat);
    printf("Digite o Coeficiente de rendimento do aluno: ");
    scanf("%f", &aux->cr);
}
int main()
{
    Estudante *x;
    preenche(&x);
    printf("%d, %.2f, %s", x.mat, x.cr, x.nome);
    return 0;
}