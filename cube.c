#include<stdio.h>

#define TRUE 1
#define FALSE 0

int main()
{
    double cube;
    double i;
    while (TRUE)
    {
    printf("entre un entier :");
    scanf("%lf",&i);
    if (i < 0)
    {
        cube = i*i*i;
        printf("le cube de %lf est : %lf\n",i,cube);
    }
    if (i > 0)
    {
        cube = i*i*i;
        printf("le cube de %lf est : %lf\n",i,cube);
    }
    }
    return (0);
}
