void merge (int *ar, int n, int med, int *artmp) {
   int i, j, k;
   artmp = (int*) malloc(n * sizeof (int));
   for (i = 0, j = med, k = 0; k < n; k++) {
        artmp[k] = (j == n)? ar[i++]: (i == med)? ar[j++]: (ar[j] < ar[i])? ar[j++]: ar[i++];
   }
   for (i = 0; i < n; i++) {
      ar[i] = artmp[i];
   }
}

void mergesort (int *ar, int n, int *artmp) {
   if (n < 2) { return; }
   int med = n / 2;
   mergesort(ar, med, artmp);
   mergesort(ar + med, n - med, artmp);
   merge(ar, n, med, artmp);
}
