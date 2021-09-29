#include <stdio.h>
int arr_size = 0;
void Insert(int *arr, int x)
{
    int i;
    for (i = arr_size-1; i >= 0; i--)
    {
        if (arr[i] > x)
            arr[i+1] = arr[i];
        else
            break;
    }
    arr[i+1] = x;
    arr_size++;
}
void Delete(int *arr, int x)
{
    for (int i = x; i < arr_size-1; i++)
        arr[i] = arr[i+1];
    
    arr_size--;
}
int Search(int *arr, int x)
{
    int l = 0;
    int h = arr_size;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] == x)
            return mid;
        else if (x > arr[mid])
            l = mid + 1;
        else if (x < arr[mid])
            h = mid - 1;
    }
    return -1;
}
void Display(int *arr)
{
    for (int i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
}
int main()
{
    int arr[1000];
    int n, x;
    do
    {
        
        printf("\nMENU Options:\n");
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Search\n");
        printf("4.Display\n");
        printf("5.EXIT\n");
        scanf("%d", &n);
        switch(n)
        {
            case 1:
            printf("Enter the element to be inserted: ");
            scanf("%d", &x);
            Insert(arr, x);
            printf("Element inserted successfully!");
            break;
            case 2:
            printf("Enter the index to be deleted: ");
            scanf("%d", &x);
            if (arr_size == 0)
                printf("Array is already empty!");
            else
            {
                Delete(arr, x);
                printf("Element deleted successfully!");
            }
            break;
            case 3:
            printf("Enter the element to be searched: ");
            scanf("%d", &x);
            if (Search(arr, x) == -1)
                printf("Element not found!");
            else
                printf("Element found at %d index.", Search(arr, x));
            break;
            case 4:
            printf("Array elements are:\n");
            Display(arr);
            break;
            case 5:
            printf("Menu Options Exit!");
            break;
        }
    }while (n != 5);
    
}
