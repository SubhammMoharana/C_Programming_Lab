//calculate GCD/HCF of two numbers by using a RECURSION function for GCD
#include<stdio.h>
int gcd(int num1, int num2);
int main()
{
    int n1,n2;
    printf("Enter two numbers ");
    scanf("%d%d",&n1,&n2);
    printf("GCD is %d",gcd(n1,n2));
    return 0;
}
int gcd(int num1, int num2)
{
    if(num2!=0){
        return gcd(num2, num1%num2);
    }
    else{
        return num1;
    }
}