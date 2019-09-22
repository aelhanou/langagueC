#include <stdio.h>

int main()
{
    int num;
    int den;
    int div;
    int res;

    printf("tapez le numerateur : ");
    scanf("%d",&num);
    printf("\ntapez le denumerateur :");
    scanf("%d",&den);

    res = num;
    div = 0;
    while (res >= den)
    {
        res -=den;
        div++;
    }
    printf("\n%d divise %d est egal : %d et le rest est : %d \n\n",num,den,div,res);
    return (0);
}
