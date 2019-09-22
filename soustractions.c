#include <stdio.h>
main()
{
 int NUM;   /* numérateur   de la division entière */
 int DEN;   /* dénominateur de la division entière */
 int DIV;   /* résultat de la division entière */
 int RES;   /* reste    de la division entière */

 printf("Introduisez le numérateur   : ");
 scanf("%d", &NUM);
 printf("Introduisez le dénominateur : ");
 scanf("%d", &DEN);

 RES=NUM;
 DIV=0;
 while(RES>=DEN)
    {
     RES-=DEN;
     DIV++;
    }

/* ou mieux encore : */
/*
 for (RES=NUM, DIV=0 ; RES>=DEN ; DIV++)
      RES-=DEN;
 */

 printf(" %d divisé par %d est %d reste %d\n", NUM, DEN, DIV, RES);
 return 0;
}

