//Take inputs from user (5 elements in array), add 2 to all elements and display.
#include<stdio.h>
int main()
{   
    int arr[5];
    //Taking Inputs
    for(int i = 0; i<5;i++){
        scanf("%d",&arr[i]);
    }
    //adding
    for(int j = 0; j<5; j++){
        arr[j]+=2;
    }
    // printing original
    printf("Answers");
    for (int k = 0; k < 5; k++)
    {
        printf("%d ", arr[k]);
    }
    return 0;
}