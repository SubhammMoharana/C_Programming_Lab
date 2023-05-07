//WAP to find the LCM of two numbers a and b by using a suitable function (say LCM) for this
#include<stdio.h>
int gcd(int num1,int num2);
int lcm(int num3, int num4);
int main()
{
    int a,b;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    printf("The LCM of %d and %d is %d",a,b,lcm(a,b));
    return 0;
}
int gcd(int num1, int num2)
{
    int temp;
    while(num2!=0)
    {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    int res = num1;
    return res;
}
int lcm(int num3, int num4)
{
    int prod = num3 * num4;
    int hcf = gcd(num3,num4);
    //hcf*lcm = product of number
    int lcm = prod / hcf;
    return lcm;
}