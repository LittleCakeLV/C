#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    time_t inicio, fim;
    srand(time(NULL));
    int n1, n2, op, res, resp;
    float tempo;
    n1 = rand() % 100;
    n2 = rand() % 100;
    op = rand() % 5;
    if (op == 0)
    {
        printf("Resolva a seguinte expressao: %d + %d\n", n1, n2);
        inicio = time(NULL);
        scanf("%d", &resp);
        fim = time(NULL);
        tempo = difftime(fim, inicio);
        res = n1 + n2;
        if (res == resp)
        {
            printf("A resposta esta correta.\n");
            printf("%.2f foi o tempo que o usuario levou para responder", tempo);
        }
        else
        {
            printf("A resposta esta incorreta.\n");
            printf("%.2f foi o tempo que o usuario levou para responder", tempo);
        }
    }
    else if (op == 1)
    {
        printf("Resolva a seguinte expressao: %d - %d\n", n1, n2);
        inicio = time(NULL);
        scanf("%d", &resp);
        fim = time(NULL);
        tempo = difftime(fim, inicio);
        res = n1 - n2;
        if (res == resp)
        {
            printf("A resposta esta correta.\n");
            printf("%.2f foi o tempo que o usuario levou para responder", tempo);
        }
        else
        {
            printf("A resposta esta incorreta.\n");
            printf("%.2f foi o tempo que o usuario levou para responder", tempo);
        }
    }
    else if (op == 2)
    {
        printf("Resolva a seguinte expressao: %d x %d\n", n1, n2);
        inicio = time(NULL);
        scanf("%d", &resp);
        fim = time(NULL);
        tempo = difftime(fim, inicio);
        res = n1 * n2;
        if (res == resp)
        {
            printf("A resposta esta correta.\n");
            printf("%.2f foi o tempo que o usuario levou para responder", tempo);
        }
        else
        {
            printf("A resposta esta incorreta.\n");
            printf("%.2f foi o tempo que o usuario levou para responder", tempo);
        }
    }
    else if (op == 3)
    {
        printf("Resolva a seguinte expressao: %d / %d\n", n1, n2);
        inicio = time(NULL);
        scanf("%d", &resp);
        fim = time(NULL);
        tempo = difftime(fim, inicio);
        res = n1 / n2;
        if (res == resp)
        {
            printf("A resposta esta correta.\n");
            printf("%.2f foi o tempo que o usuario levou para responder", tempo);
        }
        else
        {
            printf("A resposta esta incorreta.\n");
            printf("%.2f foi o tempo que o usuario levou para responder", tempo);
        }
    }
    else if (op == 4)
    {
        printf("Qual o resto da divisao  de %d por %d\n", n1, n2);
        inicio = time(NULL);
        scanf("%d", &resp);
        fim = time(NULL);
        tempo = difftime(fim, inicio);
        res = n1 % n2;
        if (res == resp)
        {
            printf("A resposta esta correta.\n");
            printf("%.2f foi o tempo que o usuario levou para responder", tempo);
        }
        else
        {
            printf("A resposta esta incorreta.\n");
            printf("%.2f foi o tempo que o usuario levou para responder", tempo);
        }
    }
    return 0;
}
