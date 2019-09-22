 #include <stdio.h>

 int main()
 {
    int a;
    int b;
    int c;
    int swp;
    printf("entre trois entier : ");
    scanf("%d %d %d",&a,&b,&c);
    printf("\navant le tri a = %d  b = %d  c = %d",a,b,c);
    if (a < b)
    {
        swp = a;
        a   = b;
        b  =swp;
    }
    if (a < c)
    {
        swp = a;
        a   = c;
        c  =swp;
    }
    if (b < c)
    {
        swp = b;
        b   = c;
        c  =swp;
    }

    printf("\napres le tri a = %d  b = %d  c = %d",a,b,c);
    return (0);
 }
