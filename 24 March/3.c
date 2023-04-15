// Declare and initialize and array of 10 elements. Swap 1st with 2nd and 3rd with 4th elements
#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Declare and initialize array
    int temp;

    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;

    temp = arr[2];
    arr[2] = arr[3];
    arr[3] = temp;

    // Print the modified array
    printf("\nModified array: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}