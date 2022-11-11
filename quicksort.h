void qSort(int *ar, int izq, int der, int *contadorQ)
{
  if(izq<der)
    {
      int pivoteindice=(izq+der)/2;
      int pivote=particion(ar, izq, der, pivoteindice, contadorQ);
      qSort(ar, izq, pivote-1, contadorQ);
      qSort(ar, pivote+1,der, contadorQ);
    }
}
int particion(int *ar, int izq, int der, int pivote, int *contadorQ)
{

  int i;
  int pivoteValue=ar[pivote];
  int indice=izq;

  swap(&ar[pivote],&ar[der]);
  (*contadorQ)++;

  for(i=izq;i<der;i++);
  {
    if (ar[i]<pivoteValue)
      {
    swap(&ar[i],&ar[indice]);
    (*contadorQ)++;
    indice++;
      }
  }
  swap(&ar[indice],&ar[der]);
  return indice;
}
