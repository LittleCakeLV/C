#include <stdio.h>

int main()
{
    float media, nota1, nota2, nota3;
    printf("Digite as tres notas dos aluno\n");
    scanf("%f%f%f", &nota1, &nota2, &nota3);
    media=(nota1*0.2)+(nota2*0.3)+(nota3*0.5);
    printf("A media do aluno eh: %.1f", media);
}