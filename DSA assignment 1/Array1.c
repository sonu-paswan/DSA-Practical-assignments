#include <stdio.h>
int length;
void sort(int A[], int len)
{
    for (int i = 1; i < len; i++)
    {
        int key = A[i];
        int j = i - 1;
        while (j >= 0 && key < A[j])
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}
void PrintArray(int A[], int len)
{
    printf("printing original elements of array\n");
    for (int i = 0; i < len; i++)
        printf("%d ", A[i]);
    printf("\n");
}
void PrintInReverse(int A[], int len)
{
    printf("printing elements in reverse order\n");
    for (int i = len - 1; i >= 0; i--)
        printf("%d ", A[i]);
    printf("\n");
}
void PrintAscending(int A[], int size)
{
    printf("printing elements in ascending order\n");
    int array[size];
    for (int i = 0; i < size; i++)
        array[i] = A[i];
    sort(array, size);
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}
void Delete(int A[], int len, int pos)
{
    if (pos > len - 1)
        printf("array out of bound\n");
    else
    {
        printf("deleted element is %d\n", A[pos]);
        for (int i = pos; i < len - 1; i++)
        {
            A[i] = A[i + 1];
        }
        length--;
    }
}

int main()
{
    int arr[] = {2, 3, 5, 8, 45, 23, 12, 90, 36, 83, 10};
    length = sizeof(arr) / sizeof(arr[0]);
    int position = 5;
    PrintArray(arr, length);
    PrintAscending(arr, length);
    PrintInReverse(arr, length);
    Delete(arr, length, position);
    PrintArray(arr, length);
    return 0;
}

/*question
1.Write a c program to store elements in an array and display it.
I.Print the array elements in reverse order.
II.Print the array element in ascending order.
III.To delete the element from the array.

*/
