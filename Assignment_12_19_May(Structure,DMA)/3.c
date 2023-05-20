//create an array and allocate memory and print sum of elements
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*a;
    printf("Enter for N");
    scanf("%d",&n);
    a = (int*)malloc(n*sizeof(int)); //without 0 initialization
    //a = (int*)calloc(n,sizeof(int)); //with zero initialization
    printf("Enter elements");
    for(int i = 0; i<n; i++){
        scanf("%d",&a[i]);
    }
    //printing
    for(int i = 0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}