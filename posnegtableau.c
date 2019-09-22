#include <stdio.h>


int main()
{
    int n;
    int T[50];
    int i;
    int N[50];
    int P[50];
    int j;


    printf("entre la dimension de tableau :");
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        printf("entre l'element %d :",i+1);
        scanf("%d",&T[i]);
    }

    for(i=0;i<n;i++)
    {
        if (T[i] >= 0)
            P[i] = T[i];
    }
    for(j=0;j<n;j++)
    {
        if (T[j] < 0)
            N[j] = T[j];
    }


    printf("les entiers positif du tableau est :");
    for(i=0;i<n;i++)
        printf("%6d",P[i]);
    printf("\n");

    printf("les entiers negative du tableau est :");
    for(i=0;i<n;i++)
        printf("%6d",N[i]);
    printf("\n");

    return (0);
}
