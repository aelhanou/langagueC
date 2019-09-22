#include <stdio.h>
main()
{
 /* Tri par ordre décroissant de trois entiers
    en échangeant les valeurs
 */
 int A, B, C, AIDE;
 printf("Introduisez trois nombres entiers :");
 scanf("%i %i %i", &A, &B, &C);
 printf("Avant le tri : \tA = %i\tB = %i\tC = %i\n", A, B, C);
 /* Valeur maximale -> A */
 if (A<B)
     {
      AIDE = A;
      A = B;
      B = AIDE;
     }
 if (A<C)
     {
      AIDE = A;
      A = C;
      C = AIDE;
     }
 /* trier B et C */
 if (B<C)
     {
      AIDE = B;
      B = C;
      C = AIDE;
     }
 printf("Après le tri : \tA = %i\tB = %i\tC = %i\n", A, B, C);
  return 0;
}





