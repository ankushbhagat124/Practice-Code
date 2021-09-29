#include <stdio.h>


void merge(int a[], int first, int mid, int last)
{
    int b[100];
    int i, j, k;
    i = first;
    j = mid+1;
    k = first;
    while (i <= mid && j <= last)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            k++;i++;
        }
        else
        {
            b[k] = a[j];
            k++; j++;
        }
    }
    while (i <= mid)
    {
        b[k] = a[i];
        k++; i++;
    }
    while (j <= last)
    {
        b[k] = a[j];
        k++; j++;
    }
    for (int i = first; i <= last; i++)
        a[i] = b[i];
    
}
void mergeSort(int a[], int first, int last)
{
    if (first >= last)
    return;
    int mid = (first+last)/2;
    mergeSort(a, first, mid);
    mergeSort(a, mid+1, last);
    merge(a, first, mid, last);
}
int main ()
{
    int a[] = {12, 8, 6, 3, 13, 1};
    int n = sizeof(a)/sizeof(a[0]);

    mergeSort(a,0,n-1);

    printf("Sorted Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}