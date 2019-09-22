#include <stdio.h>

int main()
{
    int n;
    int T[n];
    int i;
    int ech;
    int swp;

    printf("entre la dimension de tableau : ");
    scanf("%d",&n);
    for (i=0;i < n-1;i++)
    {
        printf("entre l'element %d :",i+1);
        scanf("%d",&T[i]);
    }
    printf("les elements de tableau avant le tri est : ");
    for (i=0;i <n-1;i++)
        printf("%7d",T[i]);
    printf("\n");

    do{
    ech = 0;
        for (i=0;i<n-1;i++)
        {
            if (T[i] > T[i+1])
            {
                swp    = T[i];
                T[i]   = T[i+1];
                T[i+1] = swp;
                ech++;
            }
        }

    }while(ech > 0);
    printf("les elements de tableau apres tri est :");
    for (i=0;i<n-1;i++)
        printf("%7d",T[i]);
    printf("\n");
    return (0);
}
