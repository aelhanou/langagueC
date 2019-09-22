#include<stdio.h>

int main()
{
    int a;
    int b;
    int max;

    while (1)
    {
    printf("entre un nombre : ");
    scanf("%d",&a);
    printf("entre un nombre : ");
    scanf("%d",&b);

    if (a > b)
        max = a;
    else
        max = b;

    printf("\nMAX EST : %d \n",max);

    }
    return (0);
}
