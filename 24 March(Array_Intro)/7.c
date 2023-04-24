//Take inputs from user (10) and print all even numbers in an array.
#include <stdio.h>
int main()
{
    int arr[10];
    printf("Enter the Number");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    // even number
    for (int j = 0; j < 10; j++)
    {
        if (arr[j] % 2 == 0)
        {
            printf("%d ", arr[j]);
        }
    }
    return 0;
}