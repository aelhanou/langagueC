#include <stdio.h>

int main()
{
    int i;
    int j;
    int l; //ligne
    int c; //colonne
    int T[50][50];
    int S;
    S = 0;
    printf("Entre la dimension de les lignes :");
    scanf("%d",&l);
    printf("Entre la dimension de la colonne :");
    scanf("%d",&c);
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("entre l'element %d : ",j+1);
            scanf("%d",&T[i][j]);
        }
    }
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
            S += T[i][j];
    }
    printf("la somme de element du tableau est : %d ",S);

    return (0);
}
