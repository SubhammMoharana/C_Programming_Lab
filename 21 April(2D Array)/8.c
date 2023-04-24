//WAP to check whether a given matrix is symmetric or not.
#include<stdio.h>
int main()
{
    int matrix[3][3],reverse[3][3],check=1;
    // input matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter value for %d%d\n", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    //reverse matrix 
    for (int i = 0; i < 3; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            reverse[i][k] = matrix[k][i];
        }
        
    }
    //Checking Symmetric or Not
    for(int i = 0; i<3;i++){
        for(int j =0; j<3; j++){
            if(matrix[i][j]!=reverse[i][j]){
                check=0;
                break;
            }
            
        }
    }
    if (check == 1) {
        printf("The two matrices are equal.\n");
    } else {
        printf("The two matrices are not equal.\n");
    }
    return 0;
}