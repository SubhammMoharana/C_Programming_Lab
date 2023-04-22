//. Enter a 3*4 matrix and print the transpose of the matrix (along with the original one).
#include <stdio.h>
int main()
{
    int matrix[3][4];
    // input matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter value for %d%d\n", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    // dispalying matrix
    printf("Matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            printf("%d ", matrix[i][k]);
        }
        printf("\n");
    }
    printf("************************\n");
    // transpose
    printf("Transpose is:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            printf("%d ", matrix[k][i]);
        }
        printf("\n");
    }

    return 0;
}