#include <stdio.h>
int main()
{
    int l; //les lignes
    int c; //les colonnes
    int T[50][50];
    int i;
    int j;
    int S;
    int S1;
    int S2;
    S2= 0;
    S1= 0;
    S = 0;
    printf("Entre le nombre de lignes de tableau : ");
    scanf("%d",&l);
    printf("Entre le nombre de colonne de tableau : ");
    scanf("%d",&c);

    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Entre l'element %d : ",j+1);
            scanf("%d",&T[i][j]);
        }
    }
    for(i=0;i<l;i++)
    {
        S = 0;
        for(j=0;j<i+1;j++)
        {
            S +=T[i][j];
            printf("la somme de chaque colonne est : %d\n",S);
        }

    }




    return (0);
}
