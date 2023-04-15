// Populate one array a[8] with user input. Copy all the elements into another array b[8]
#include<stdio.h>
int main()
{
    int n;
    printf("Enter elements");
    scanf("%d",&n);
    int arr[n],arr2[n];
    //adding
    printf("Enter for array1");
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    //copying
    for(int i = 0; i<n; i++){
        arr2[i]=arr[i];
    }
    //printing
    for(int i = 0; i<n; i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}