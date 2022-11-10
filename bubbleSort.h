#include "funciones complementarias.h"
void cambiazo(int a, int b){
	int aux= a;
	a = b;
	b = aux;
}

void bubblesort(int ar[], int n)
{
    for (int k = 0; k < n - 1; k++)
    {
        for (int i = 0; i < n - 1 - k; i++)
        {
            if (ar[i] > ar[i + 1]) {
                cambiazo(ar[i], ar[i+1]);
            }
        }
    }
}
