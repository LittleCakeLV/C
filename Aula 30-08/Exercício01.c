/*. OBI - Exercício do Bondinho. A turma do colégio vai fazer uma excursão na serra e todos os alunos e monitores vão
tomar um bondinho para subir até o pico de uma montanha. A cabine do bondinho pode levar 50 pessoas no máximo,
contando alunos e monitores, durante uma viagem até o pico. Neste problema, dado como entrada o número de alunos
e o núnero de monitores, você deve implementar um programa que diga se é possível ou não levar todos os alunos e
monitores em apenas uma viagem*/

#include <stdio.h>
 
int main()
{
    int alunos, monitores, res;
    printf("Digite o numero de alunos e monitores para a viagem: ");
    scanf("%d%d", &alunos, &monitores);
    res=(alunos+monitores);
    if (res<=50 && res>=0)
    {
        printf("A viagem eh possivel");
    }else if (res>50)
    {
        printf("A viagem nao e possivel");
    }
    

    
}