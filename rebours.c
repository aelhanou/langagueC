#include <stdio.h>
main()
{
 int  NOMB;   /* Le nombre à inverser */
 int  NINV;   /* Le nombre inversé    */
 /* Attention: en utilisant le type int, il est impossible */
 /* d'inverser correctement des nombres comme 10033 ...    */
 do
   {
     printf("Entrez un nombre positif (<10000) : ", NOMB);
    scanf("%d", &NOMB);
   }
 while (NOMB<0 || NOMB>9999);

 NINV=0;
 while(NOMB>0)
    {
     NINV *= 10;
     NINV += NOMB%10;
     NOMB /= 10;
    }

 /* Autre possibilité : */
 /* for (NINV=0 ; NOMB>0 ; NOMB/=10)
        NINV = NINV*10 + NOMB%10;
 */

 printf("Le nombre 'inversé' est : %d\n", NINV);
 return 0;
}
