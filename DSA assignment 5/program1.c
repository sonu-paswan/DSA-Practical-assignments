
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
    int len;
    printf("how many numbers ? ");
    scanf("%d", &len);
    int *arr = (int *)malloc(sizeof(int) * len);
    printf("enter numbers\n");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
    /*Bubble sort algorithm*/
    int indicator;
    for (int i = 0; i < len - 1; i++)
    {
        indicator = 0;
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr + j, arr + j + 1);
                indicator = 1;
            }
        }
        if (indicator == 0)
        {
            // printf("already sorted !");
            break;
        }
    }

    printf("\nafter sorting\n");
    for (int j = 0; j < len; j++)
    {
        printf("%d ", arr[j]);
    }
    return 0;
}
/*question
1)Bubble Sort*/
