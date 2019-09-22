#include <stdio.h>

int main()
{
    int i;
    int n;
    float s;

    i = 1;
    s = 0;
    printf("entre un nombre :");
    scanf("%d",&n);

    while (i <= n)
    {
        s +=(float)1/i;
        i++;
    }
    printf("la somme de suite harmonique jusqu'a %d est %.2f",n,s);
    return (0);
}
