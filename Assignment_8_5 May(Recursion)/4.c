//WAP to calculate the factorial of a number Using Recursion
#include<stdio.h>
int fact(int i);
int main()
{
    int num;
    printf("Enter a value");
    scanf("%d",&num);
    printf("Factorial of %d is %d",num,fact(num));
    return 0;
}
int fact(int i)
{
    if(i<=1)
    {
        return i;
    }
    else{
        return i * fact(i-1);
    }
}