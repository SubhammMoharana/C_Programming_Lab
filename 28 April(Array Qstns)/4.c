//Initialize a array and delete all the duplicate element form it
#include <stdio.h>

int main() {
    int arr[9] = { 1, 2, 3, 2, 4, 1, 5, 3, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, k;

    // Remove duplicates
    for (i = 0; i < n; i++) //i=0
    {
        for (j = i + 1; j < n; j++) //i=1,2,3,4,5,6,7,8,9 {i=0,j=5}
        {
            if (arr[i] == arr[j]) 
            {   //Deletion ka loop
                for (k = j; k < n; k++) {
                    arr[k] = arr[k + 1];
                }
                n--; //size kamega
                j--; //wahi se suru hoga j jahan se chhoda tha (2,3,2,1) i.e j=3 not j=4
            }
        }
    }

    // Print the array without duplicates
    printf("Array without duplicates: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
