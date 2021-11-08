
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    // insertion sort algorithm
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    printf("\nafter sorting\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
