//WAP to copy the contents of one array ‘ar’ to another array ‘br’.
#include<stdio.h>
int main() 
{
    int arr[2] = {1,3};
    int brr[2];
    
    //copying
    for(int i = 0; i<2; i++)
    {
        brr[i] = arr[i];
    }
    // printing original
    for (int i = 0; i < 2; i++)
    {
        printf("%d ", brr[i]);
    }

    return 0;
}