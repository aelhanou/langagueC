#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    int b;
    int c;
    int delta;
    double s1;
    double s2;
    double s;
    while (1)
    {
    printf("\nEntre trois nombre : ");
    scanf("%d %d %d",&a,&b,&c);

    delta = b * b -4 * a * c;

    if (delta > 0)
    {
        s1 = (-b - sqrt(delta))/(2 * a);
        s2 = (-b + sqrt(delta))/(2 * a);
        printf("les deux solutions est s1 = %lf et s2 = %lf",s1,s2);
    }
    else if (delta == 0)
    {
        s = -b /(2 * a);
        printf("la seule solution est s = %lf",s);
    }
    else
        printf("l'equation n'admet pas de solution ----!");
    }
    return (0);
}
