//1. Enter a 3*3 matrix and print in  the matrix form.
#include<stdio.h>
int main()
{
    int matrix[3][3] = {{1,2,4},{4,5,6},{7,8,9}};
    //printing the matrix
    for (int i = 0; i<3; i++){
        for(int k = 0; k<3; k++){
            printf("%d ",matrix[i][k]);
        }
        printf("\n");
    }
    return 0;
}