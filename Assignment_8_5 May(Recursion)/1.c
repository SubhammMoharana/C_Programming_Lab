#include<stdio.h>
int count_d(int num);
int main()
{
    int digit;
    printf("Enter a number ");
    scanf("%d",&digit);
    printf("Total digits in the number %d is %d",digit,count_d(digit));
    return 0;
}
int count_d(int num)
{
    static int count = 0;
    if(num>0)
    {
        count++;
        count_d(num/10);
    }
    else{
        return count;
    }
}