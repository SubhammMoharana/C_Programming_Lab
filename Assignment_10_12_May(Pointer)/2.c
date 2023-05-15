//print and prove that name of an array is actually the address of its first element
#include<stdio.h>
int main()
{
    int arr[] = {1,3,2,4,6};
    printf("The adress of array %u\n", arr);
    printf("The adress of array %u\n", &arr[0]);
    //BOTH HAVE SAME ADDRESS
    return 0;
}