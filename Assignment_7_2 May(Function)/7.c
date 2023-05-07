//WAP to find out ncr factor by using a user defined function for factorial (say fact).
#include<stdio.h>
int fact(int n);
int ncr(int n, int r);
int main()
{
    int n,r;
    printf("Enter the value of n and r");
    scanf("%d%d",&n,&r);
    int result = ncr(n,r);
    printf("The answer is %d",result);
    return 0;
}
int fact(int n)
{
    int fac = 1;
    for(int i = 1; i<=n; i++){
        fac *= i;
    }
    return fac;
}
int ncr(int n, int r)
{
    int res;
    int num = fact(n);
    int den = fact(r)*fact(n-r);
    res = num / den;
    return res;

}