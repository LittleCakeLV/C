#include <stdio.h>
void convertehora(int tot_seg, int *hora, int *min, int *seg)
{
    *hora=tot_seg/3600;
    *min=(tot_seg%3600)/60;
    *seg=(tot_seg%3600)%60;
}
int main()
{
    int tot_seg, hora, seg, min;
    printf("Digite uma quantidade de segundos\n");
    scanf("%d", &tot_seg);
    convertehora(tot_seg, &hora, &min, &seg);
    printf("%d:%d:%d", hora, min, seg);
}
