#include<stdio.h>

int main()
{
    int p;
    while (1)
    {
    printf("entre un nombre : ");
    scanf("%d",&p);
    if (p % 2 == 0)
        printf("\n%d est pair \n",p);
    else
        printf("\n%d est impair\n",p);
    }
    return (0);
}
