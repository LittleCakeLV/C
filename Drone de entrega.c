/*Entrada A
Entrada B
Entrada C
Entrada H
Entrada L

1<=A,B,C,H,L<=100

comparar A,B,C com H, caso exista pelo menos uma medida menor que H,
então é feita a comparação com L, caso exista uma medida menor que L
imprimir S, caso qualquer umas das comparações não houver uma afirmativa
imprimir N
*/
#include <stdio.h>
int A, B, C, H, L, I, J;

int main()
{
    printf("Digite uma medida\n");
    scanf("%d",&A);
    printf("Digite outra medida\n");
    scanf("%d",&B);
    printf("Digite uma outra medida\n");
    scanf("%d",&C);
    printf("Digite uma medida da janela\n");
    scanf("%d",&H);
    printf("Digite outra medida da janela\n");
    scanf("%d",&L);
    J=0;
    I=0;
    if ( A < H || B < H || C < H)
    {
        I=I+1;
    }
    
    if (A < L || B < L || C < L)
    {
        J=J+1;
    }
    if (I > 0 && J > 0)
    {
        printf("Cabe\n");
    }
    else{
        printf("Nao cabe\n");
    } 
}