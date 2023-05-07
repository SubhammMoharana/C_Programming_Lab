// Enter an array from user, print all the multiple of 3 and 4 in that array using a function.
#include <stdio.h>
void mul_arr(int arr[], int n);
int main()
{
    int arr[100],n;
    printf("Enter total number of element");
    scanf("%d",&n);
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    //printing through function//
    mul_arr(arr,n);
    return 0;
}
void mul_arr(int arr[], int n)
{
    // multiple of 3
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 3 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    // multiple of 4 
    for (int j = 0; j < n; j++)
    {
        if (arr[j] % 4 == 0)
        {
            printf("%d ", arr[j]);
        }
    }
}
