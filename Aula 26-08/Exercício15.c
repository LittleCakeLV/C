#include <stdio.h>

int main()
{
    int valor, dias, hrs, min, seg;

    printf("Digite um valor inteiro em segundos: ");
    scanf("%d", &valor);
    dias=valor/86400;
    hrs=(valor%86400)/3600;
    min=(((valor%86400)%3600))/60;
    seg=(((valor%86400)%3600))%60;
    printf("Esse valor em segundos corresponde a %d dias, %d horas, %d minutos e %d segundos", dias, hrs, min, seg);
}