//WAP to calculate GCD/HCF of two numbers by using a function for GCD
#include<stdio.h>
int gcd(int num1, int num2);
int main()
{
    int num1,num2;
    printf("Enter two number");
    scanf("%d%d",&num1,&num2);
    int temp;
    while(num2!=0)
    {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    int res = num1;
    printf("GCD of %d",res);
    return 0;
}
