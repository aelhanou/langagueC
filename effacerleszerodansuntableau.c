#include <stdio.h>

int main()
{
    int i;
    int j;
    int T[50];
    int n;
    printf("entre la simension de tableau : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("entre l'element %d : ",i+1);
        scanf("%d",&T[i]);
    }
    printf("tablau est :");
    for(i=0;i<n;i++)
        printf("%6d",T[i]);
    printf("\n");
    for(i=0,j=0;i<n;i++)
    {
        T[j] = T[i];
        if(T[i] != T[i])
            j++;
    }
    n = j;
    printf("Tableau est :");
    for(i=0;i<n;i++)
    {
        printf("%6d",T[i]);
    }
    return (0);
}
