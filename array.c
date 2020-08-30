#include <stdio.h>

int main()
{
    int i, j, m, n;
    int matrix[3][3];
    int *p=&i;
    int *q=&j;
    printf("Input elements in the matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Element [%d][%d]: ",i,j);
            scanf("%d", &matrix[i][j]);
            
        }
    }
    printf("The matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
