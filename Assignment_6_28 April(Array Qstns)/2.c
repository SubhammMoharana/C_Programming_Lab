// write a program to delete all the prime number in an array
#include <stdio.h>
int main()
{
    int arr[] = {2, 4, 1, 6, 8};
    printf("Size of 1st elemnt of array %d\n",sizeof(arr[0]));
    printf("Size of array %d\n",sizeof(arr) );
    int n = sizeof(arr) / sizeof(arr[0]);
    // checking
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        // prime number concept
        int isPrime = 1; //maan lete h prime h 
        for (int k = 2; k * k <= arr[i]; k++)
        {
            if (arr[i] % k == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (!isPrime) //boolean logiic operator(Not prime wala term)
        {
            arr[j] = arr[i];
            j++;
        }
    }
    n = j;
    // printing
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}