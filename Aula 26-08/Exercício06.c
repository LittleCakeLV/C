#include <stdio.h>

int main()
{
    float n1=0, n2=0;
    float media=0;

    printf("Digite dois valores: ");
    scanf("%f%f", &n1, &n2);

    media=(n1+n2)/2;
    printf("A media dos valores eh: %.2f", media);
}