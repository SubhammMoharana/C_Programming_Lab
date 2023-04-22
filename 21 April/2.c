// Enter two 3*3 matrices and add them, display the entered matrices and also the resultant matrix
#include <stdio.h>
int main()
{
    int matrix[3][3], matrix2[3][3], add_matrix[3][3];
    // user input for matrix1
    printf("Enter for Matrix_1\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    // user input for matrix2
    printf("Enter for Matrix_2\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    // adding 2 matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            add_matrix[i][j] = matrix[i][j] + matrix2[i][j];
        }
    }
    // dispalying matrix 1
    printf("Matrix1\n");
    for (int i = 0; i < 3; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            printf("%d ", matrix[i][k]);
        }
        printf("\n");
    }
    // displaying matrix 2
    printf("Matrix2\n");
    for (int i = 0; i < 3; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            printf("%d ", matrix2[i][k]);
        }
        printf("\n");
    }
    // displaying reslultant
    printf("Adding\n");
    for (int i = 0; i < 3; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            printf("%d ", add_matrix[i][k]);
        }
        printf("\n");
    }
    return 0;
}