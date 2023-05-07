//Print Sum of Even Numbers in Array using Recursion
#include <stdio.h>

int sumOfEven(int arr[], int size);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = sumOfEven(arr, size);
    printf("Sum of even numbers: %d\n", sum);

    return 0;
}

int sumOfEven(int arr[], int size)
{
    if (size == 0)
        return 0;

    int lastElement = arr[size - 1];

    if (lastElement % 2 == 0)
        return lastElement + sumOfEven(arr, size - 1);
    else
        return sumOfEven(arr, size - 1);
}
