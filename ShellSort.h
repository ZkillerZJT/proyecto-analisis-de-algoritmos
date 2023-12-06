 void shellsort(int *ar, int n) {
	int intervalo;
  for (intervalo = n / 2; intervalo > 0; intervalo /= 2) {
  	int i;
    for (i = intervalo; i < n; i += 1) {
      int temp = ar[i];
      int j;
      for (j = i; j >= intervalo && ar[j - intervalo] > temp; j -= intervalo) {
        ar[j] = ar[j - intervalo];
      }
      ar[j] = temp;
    }
  }
}
