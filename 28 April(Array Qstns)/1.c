// initialize a array and replace is to its factorial
#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    // replacing
    for (int i = 0; i < 5; i++)
    {
        // factorial ka logic
        int fact = 1;
        for (int j = 1; j <= arr[i]; j++)
        {
            fact *= j;
        }
        arr[i] = fact;
    }
    // printing
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}