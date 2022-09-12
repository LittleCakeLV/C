#include <stdio.h>

int main()
{
    int n, i, fat = 0;
    printf("digite um valor: ");
    scanf("%d", &n);
    for (size_t i = 1; i < n - 1; i++)
    {
        fat = n * (n - i) + fat;
    }
    printf("%d", fat);
    return 0;
}