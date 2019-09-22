#include <stdio.h>

int main()
{
    int n;
    int T[50];
    int i;
    int swp;

    printf("entre la dimension de tableau :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("entre l'element %d :",i+1);
        scanf("%d",&T[i]);
    }
    printf("tableau est :");
    for(i=0;i<n;i++)
        printf("%6d",T[i]);
    printf("\n");
    for(i=1;i<=n/2;i++)
    {
        swp   = T[i-1];
        T[i-1]  = T[n-i];
        T[n-i]= swp;

    }
    printf("l'inverse de tableau est :");
    for(i=0;i<n;i++)
        printf("%6d",T[i]);
    printf("\n");

    return (0);
}
