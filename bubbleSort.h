
void cambiazo(int a, int b){
	int aux= a;
	a = b;
	b = aux;
}

void bubblesort(int *ar, int n)
{
	int k;
    for (k=0; k < n - 1; k++)
    {
    	int i;
        for (i=0; i < n - 1 - k; i++)
        {
            if (ar[i] > ar[i + 1]) {
                cambiazo(ar[i], ar[i+1]);
            }
        }
    }
}
