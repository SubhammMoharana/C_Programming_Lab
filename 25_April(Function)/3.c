#include<stdio.h>
void swap(int num1, int num2);
int main()
{
	int a = 3;
	int b = 4;
	swap(a,b);
	return 0;
}
void swap(int num1, int num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("The value of a is %d and b is %d\n",num1,num2);
}
