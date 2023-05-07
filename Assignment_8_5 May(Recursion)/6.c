//Find nth term in Fibonacci series using recursion
#include<stdio.h>
int fib(int i);
int main()
{
    int n;
    printf("Enter value ");
    scanf("%d",&n);
    printf("Sum of Fibonnico series is %d",fib(n));
    return 0;
}
int fib(int i)
{
    if(i == 0 || i == 1){
        return i;
    }
    else
    {
        return fib(i-1) + fib(i-2);
    }
}