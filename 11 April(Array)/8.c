//10. Take user input into an array and writa a program to sort the array.
#include <stdio.h>
int main()
{
    int a[5];
    int i, n, j, temp;
    printf("Enter Element");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    // sort
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {   //swapping
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    //printing
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}