// WAP to find out the sum of the elements stored in a matrix (user input)
#include <stdio.h>
int main()
{
    int matrix[10][10];
    int row, col, sum = 0;
    printf("Enter No. of Rows and column of matrix");
    scanf("%d%d", &row, &col);
    // User inpur
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter value for %d%d\n", i, j);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    printf("The sum of matrix is %d", sum);
    return 0;
}