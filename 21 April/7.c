// WAP to find out the sum of the diagonal elements of a matrix
#include<stdio.h>
int main()
{
    int sum = 0;
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0; i<3; i++){
       sum+=matrix[i][i];
    }
    printf("The sum of diogonal is %d",sum);
    return 0;
}