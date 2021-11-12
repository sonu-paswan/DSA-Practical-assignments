#include <stdio.h>
// sparse matrix multiplication
// for 3X3 matrix
int main()
{
    int A[10][10], B[10][10], mul[10][10];
    int i, j, k;
    // taking elements in matrix A
    printf("enter elements of matrix A\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter element %d%d :", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }
    // taking elements in matrix B
    printf("enter elements of matrix B\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter element %d%d :", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }
    // printing elements of matrix A
    printf("matrix A \n");
    printf("row colomn value \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (A[i][j])
            {
                printf("%d %d %d", i + 1, j + 1, A[i][j]);

                printf("\n");
            }
        }
    }
    // printing elements of matrix B
    printf("matrix B \n");
    printf("row colomn value \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (B[i][j])
            {
                printf("%d %d %d", i + 1, j + 1, B[i][j]);
                printf("\n");
            }
        }
    }
    printf("matrix (AxB) \n");
    printf("row colomn value \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                mul[i][j] += A[i][k] * B[k][j];
            }
            if (mul[i][j])
            {
                printf("%d %d %d ", i + 1, j + 1, mul[i][j]);
                printf("\n");
            }
        }
    }
    return 0;
}
/*Question no 2) Sparse Matrix Multiplication */
