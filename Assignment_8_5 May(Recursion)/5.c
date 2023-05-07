//. WAP to calculate the Sum of Natural Numbers Using Recursion
#include<stdio.h>
int sum_natural(int n);
int main()
{
    int n;
    printf("Enter value of n ");
    scanf("%d",&n);
    printf("The sum of natural from 1 to %d is %d",n,sum_natural(n));
    return 0;
}
int sum_natural(int n)
{
    if(n!=0){
        return n + sum_natural(n-1);
    }
    else{
        return n;
    }
}