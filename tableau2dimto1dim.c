#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i;
    int j;
    int k;
    int l;
    int c;
    int T[50][50];
    int Tab[50];
    int S;
    printf("Entre le nombre de lignes  :");
    scanf("%d",&l);
    printf("Entre le nombre de colonne :");
    scanf("%d",&c);
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Entre element %d : ",j+1);
            scanf("%d",&T[i][j]);
        }
    }
    printf("le tableau de deux dimension est : \n");
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            S = T[i][j];
            printf("%3d",S);
        }
        printf("\n");

    }
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            for(k=j;k<50;k++)
            {
                Tab[k]=T[i][j];
            }
        }
    }
    printf("\n\nle tableau de 1 dimension est : ");
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            for(k=j;k<50;k++)
            {
                printf("%d",Tab[k]);
            }
        }
    }
    return(0);
}
