#include <stdio.h>
#include <time.h> // necessário para utilizar localtime() e struct tm

int main()
{
    struct tm *data_atual;             // ponteiro para o struct da biblioteca time.h que armazena data e hora
    time_t segundos;                   // variavel para obter o tempo em segundos
    time(&segundos);                   // obtendo o tempo em segundos
    data_atual = localtime(&segundos); // converção de segundos para tempo local
    int d, m, a, idade, s;
    printf("Digite a sua data de nascimento no formato dd/mm/aaaa\n");
    scanf("%d/%d/%d", &d, &m, &a);

    s = (d + (((m + 1) * 26)) / 10 + (a % 100) + ((a % 100) / 4) + ((a / 100) / 4) + 5 * (a / 100)) % 7;
    printf("%d\n", s);
    if (m >= data_atual->tm_mon + 1 && d >= data_atual->tm_mday) // comparação utilizando os membros do struck tm_mon e tm_mday
    {
        /* utilizando data_atual declarado no struct junto do operador -> e um membro do struct tm_year
        para obtenção do ano no sistema*/
        idade = ((data_atual->tm_year + 1900) - a) - 1;
    }
    else
    {
        idade = (data_atual->tm_year + 1900) - a;
    }
    if (s == 0)
    {
        printf("A sua idade eh %d anos e vc nasceu em um sabado", idade);
    }
    else if (s == 1)
    {
        printf("A sua idade eh %d anos e vc nasceu em um domingo", idade);
    }
    else if (s == 2)
    {
        printf("A sua idade eh %d anos e vc nasceu em uma segunda", idade);
    }
    else if (s == 3)
    {
        printf("A sua idade eh %d anos e vc nasceu em uma terca", idade);
    }
    else if (s == 4)
    {
        printf("A sua idade eh %d anos e vc nasceu em uma quarta", idade);
    }
    else if (s == 5)
    {
        printf("A sua idade eh %d anos e vc nasceu em uma quinta", idade);
    }
    else if (s == 6)
    {
        printf("A sua idade eh %d anos e vc nasceu em uma sexta", idade);
    }

    return 0;
}
