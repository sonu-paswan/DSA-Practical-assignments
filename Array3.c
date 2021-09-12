#include <stdio.h>

int main()
{
    int arr[]={3,2,2,4,6,86,56,3,223,5,67,23};
    int len=sizeof(arr)/sizeof(arr[0]);
    int arr2[len];
    for(int i=0;i<len;i++)//copying elements
    {
        arr2[i]=arr[i];
    }
    printf("first array\n");
    for(int i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("copied array\n");
    for(int i=0;i<len;i++)
    {
        printf("%d ",arr2[i]);
    }

    return 0;
}