#include <stdio.h>

int main()
{
    int i;
    int n;
    int nb;

    i = 1;
    printf("entre un nombre :");
    scanf("%d",&n);

    if (n == 0 || n == 1)
        return (1);
    nb = n;
    while (n > 1)
    {
        i = i * n;
        n--;
    }
    printf("le factoriel de %d est %d",nb,i);
    return (0);
}
