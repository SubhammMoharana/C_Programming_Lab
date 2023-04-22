// Enter two matrices and perform multiplication. Display the entered matrices and then the resultant matrix.
#include <stdio.h>
int main()
{
    int matrix[3][3], matrix2[3][3], mul_matrix[3][3];
    // input matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter value for %d%d\n", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    // input matrix2
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter value for %d%d\n", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    // dispalying matrix1
    printf("Matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            printf("%d ", matrix[i][k]);
        }
        printf("\n");
    }
    // dispalying matrix1
    printf("Matrix2\n");
    for (int i = 0; i < 3; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            printf("%d ", matrix2[i][k]);
        }
        printf("\n");
    }
    // Multiplication ((IMPORTANT))
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mul_matrix[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                mul_matrix[i][j] += matrix[i][k] * matrix2[k][j];
            }
        }
    }
    // Result
    printf("Resultant matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", mul_matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}