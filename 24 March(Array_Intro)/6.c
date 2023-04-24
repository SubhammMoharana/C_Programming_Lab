// Take inputs from user (8 elements) in array and print in the reverse order.
#include <stdio.h>
int main()
{
    int arr[8];
    printf("Enter the Number");
    for (int i = 0; i < 7; i++)
    {
        scanf("%d ", &arr[i]);
    }
    // reverse order
    for (int j = 7; j >= 0; j--)
    {
        printf("%d ", arr[j]);
    }
    return 0;
}