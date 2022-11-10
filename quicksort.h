#include <cstdio>
#include <algorithm>

using namespace std;
int particion (int ar[], int bajo, int alto)
{
    int pivot = ar[alto];    //taking the last element as pivot
    int i = (bajo - 1);
    for (int j = bajo; j <= alto- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (ar[j] <= pivot)
        {
            i++;
            swap(ar[i], ar[j]);
        }
    }
    swap(ar[i + 1], ar[alto]);
    return (i + 1);
}

void quickSort(int ar[], int bajo, int alto)
{
    if (bajo < alto)
    {
        int pi = particion(ar, bajo, alto);
        quickSort(ar, bajo, pi - 1);
        quickSort(ar, pi + 1, alto);
    }
}

/*int main()
{
    int ar[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(ar)/sizeof(ar[0]);
    quickSort(ar, 0, n-1);

    return 0;
}*/
