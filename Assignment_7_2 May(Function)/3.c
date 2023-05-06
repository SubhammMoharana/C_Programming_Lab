//WAP o calculate the sum of a digit using function
#include<stdio.h>
int sum(int n);
int main()
{	int  num = 1234;
	printf("The answer is %d " , sum(num)); 
	return 0;
}
int sum(int n)
{
	int sum = 0;
	while(n!=0)
	{
	sum = sum + (n%10);
	n = n/10;
	}
	return sum;
}
