#include <stdio.h>
int size;
int Sum(int A[], int len)
{
    printf("sum of all elemets of arrays\n");
    int sum = 0;
    for (int i = 0; i < len; i++)
        sum += A[i];
    return sum;
}
float Avergae(int A[], int len)
{
    printf("average of all elements of arrays\n");
    float add = 0;
    for (int i = 0; i < len; i++)
        add += A[i];
    return (float)add / len;
}
void Duplicate(int A[], int len)
{
    printf("duplicate numbers in array\n");
    int a = 0;
    int flag = 0;
    for (int i = 0; i < len; i++)
    {
        a = A[i];
        flag = 0;
        for (int j = i + 1; j < len; j++)
        {
            if (a == A[j])
                flag = 1;
        }
        if (flag == 1)
            printf("%d ", a);
    }
    // time complexity -> O(n^2)
}
int main()
{
    int arr[] = {3, 2, 1, 7, 6, 6, 5, 4, 8, 9, 9};
    size = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", Sum(arr, size));
    printf("%f\n", Avergae(arr, size));
    Duplicate(arr, size);
    return 0;
}

/*question
2.Write a c program to print the entire unique element in an array.
I.Print the duplicate element from the array.
II.Print sum of all element of an array.
III.Print the average of all elements.
*/
