/*
Entrada N
Entrada I

conforme o usuário insere o número do ingresso, 
é adicionado 1 à uma variável que começa com o valor zero,
após isso e feito uma comparação do numero do ingresso com o valor atual
após a soma dessa variável, essa repetição é dada pelo valor N que o usuário inseriu,
caso um dos valores for igual, é impresso na tela o valor desse bilhete que
será armazenado na variavel R nesse momento. */
#include <stdio.h>


int Num_Ing, Ing, Result, I;

int main()
{
    
    printf("Digite o numero de ingressos\n");
    scanf("%d", &Num_Ing);
    for (I = 0; I < Num_Ing; I++)
    {
        printf("Digite o Numero do seu ingresso\n");
        scanf("%d", &Ing);
        if (I == Ing)
        {
            Result=Ing;
        }
        
    }
    printf("o ingresso ganhador e: %d", Result);    
}