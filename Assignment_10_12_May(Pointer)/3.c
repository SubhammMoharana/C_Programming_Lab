//take input of an array and print using pointer
#include<stdio.h>
int main()
{
    int arr[5];
    //taking input 
    printf("Enter the value in array");
    for(int i = 0; i<5; i++){
        scanf("%d",arr+i); //same as arr[i]
    }
    //printing the values
     for(int i = 0; i<5; i++){
        printf("%d",*(arr+i)); //same as arr[i]
    }
    return 0;
}