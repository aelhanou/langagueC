#include <stdio.h>
main()
{
 int  X;      /* Le chiffre courant      */
 int  N=0;    /* Le compteur des données */
 int  SOM=0;  /* La somme actuelle       */
 long PROD=1; /* Le produit actuel  -  Type long à */
              /* cause de la grandeur du résultat. */


 do
    {
      /* Saisie des données (pour perfectionnistes) */
     printf("Entrez le %d%s chiffre : ", (N+1), (N)?"e":"er");
     scanf("%d", &X);

     if (X<0||X>9)
        printf("\a");
     else if (X)
        {
         N++;
         SOM+=X;
         PROD*=X;
        }
     else if (!X && N>0)
         {/* Seulement si au moins un chiffre a été accepté */
         printf("La somme   des chiffres est %d \n", SOM);
         printf("Le produit des chiffres est %ld\n", PROD);
         printf("La moyenne des chiffres est %f \n", (float)SOM/N);
        }
    }
 while (X);
  return 0;
}

