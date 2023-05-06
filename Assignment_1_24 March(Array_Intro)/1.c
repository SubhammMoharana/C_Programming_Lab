//Declare and initialize and array of 10 elements. Copy 1st, 2nd and 3rd elements to 6th, 7th and 8th positions.
#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // printing original
    printf("Original \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    // replacing
    arr[5] = arr[0];
    arr[6] = arr[1];
    arr[7] = arr[2];

    printf("\nModified\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}