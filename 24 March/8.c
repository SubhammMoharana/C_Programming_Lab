//Take inputs from user (10) and print first all odd numbers and then all even numbers in an array.
#include <stdio.h>

int main() {
    int arr[10];
    int i;

    // Input values for array
    printf("Enter 10 values for array:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Print odd numbers
    printf("\nOdd numbers: ");
    for(i = 0; i < 10; i++) {
        if(arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }

    // Print even numbers
    printf("\nEven numbers: ");
    for(i = 0; i < 10; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
