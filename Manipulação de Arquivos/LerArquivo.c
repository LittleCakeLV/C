#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define BUFFER 1024

int main(int argc, char const *argv[])
{
    FILE* in_file;
    char *NomeArquivo, **Padrao, *Caracter;
    char LinhaArquivo[BUFFER];
    int Linha, Coluna, i = 0;
    in_file = fopen("blinker.csv", "r");
    if (in_file == NULL)
    {
        printf("Erro ao abrir arquivo %s\n", "blinker.csv");
        return (1);
    }
    //printf("entrou aqui");
    while (!feof(in_file))
    {
        printf("entrou aqui");
        fgets(LinhaArquivo, BUFFER, in_file);
        Caracter = strtok(LinhaArquivo, ",");
        while (Caracter != NULL)
        {
            printf("%c", *Caracter);
            Caracter = strtok(NULL, ",");
            Sleep(1000);
        }
        i++;
    }
    fclose(in_file);
    return 0;
}
