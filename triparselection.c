#include <stdio.h>


int main()
{
    int i;
    int n;
    int T[50];
    int j;
    int tmp;

    printf("entre demension de tableau :");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("entre l'element %d :",i+1);
        scanf("%d",&T[i]);
    }
    printf("les elements de tableau avant tri est :");
    for (i=0;i<n;i++)
        printf("%6d",T[i]);
    printf("\n");

    for (i=0;i<n;i++)
    {
        tmp=T[i];
        j = i-1;
        while (j>=0 && T[j]>tmp )
        {
            T[j+1]=T[j];
            j--;
        }
        T[j+1]=tmp;
    }
    printf("les elements de tableau apres tri est :");
    for (i=0;i<n;i++)
        printf("%6d",T[i]);
    printf("\n");

    return (0);
}
