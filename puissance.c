#include <stdio.h>

int main()
{
    int n; // entier
    int p; // puissance
    int i; // compteur
    int res; // result

    res = 1;
    i = 1;
    printf("entre un nombre :");
    scanf("%d",&n);
    printf("entre leur puissance :");
    scanf("%d",&p);

    while (i <= p)
    {
        res *= n;
        i++;
    }
    printf("%d puissance %d est %d",n,p,res);

    return (0);
}
