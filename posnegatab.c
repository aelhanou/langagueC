#include <stdio.h>
int main()
{
    int n;
    int T[50];
    int i;
    int P[50];
    int N[50];
    int Pos;
    int Neg;

    printf("entre la dimension de tableau : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("entre l'element %d :",i+1);
        scanf("%d",&T[i]);
    }
    Pos = 0;
    Neg = 0;
    for(i=0;i<n;i++)
    {
        if (T[i] >= 0)
        {
            P[Pos] = T[i];
            Pos++;
        }
        if (T[i] < 0)
        {
            N[Neg] = T[i];
            Neg++;
        }
    }
    printf("les valeurs positive de tableau est :");
    for(i=0;i<Pos;i++)
        printf("%6d",P[i]);
    printf("\n");
    printf("les valeurs negative de tableau est :");
    for(i=0;i<Neg;i++)
        printf("%6d",N[i]);
    printf("\n");
    return (0);
}
