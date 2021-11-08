
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    printf("enter size of array : ");
    int size;
    scanf("%d", &size);
    int *arr = (int *)malloc(sizeof(int) * size); // dynamic array
    printf("enter elements :-\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // selection sort algorithm
    for (int i = 0; i < size - 1; i++)
    {
        int key = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[key]) // finding smallest element index
                key = j;
        }
        swap(arr + key, arr + i);
    }
    printf("\nafter sorting\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
