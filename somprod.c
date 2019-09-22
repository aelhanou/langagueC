int main()
{
  int N;
  int i;
  int som;
  int pro;
  int nombre;
  int moy;
  som = 0;
  pro = 1;
  printf("entrez le nombre des entiers qui vous voulez : ");
  scanf("%d",&N);
  for(i = 1;i <= N;i++)
  {
    printf("entre %d nombre :",i);
    scanf("%d",&nombre);
    som +=nombre;
    pro *=nombre;
  }
  moy = som/N;
  printf("la somme est : %d\n",som);
  printf("le produit est : %d\n",pro);
  printf("la moyenne est : %d\n\n",moy);
  return 0;
}
