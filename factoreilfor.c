#include <stdio.h>

int main()
{
    int i;
    int n;
    int nb;

    i = 1;
    printf("entre un nombre :");
    scanf("%d",&n);


    nb = n;
    for (i = 1; n > 1;n--)
        i = i * n;
        printf("le factoriel de %d est %d",nb,i);
    return (0);
}
