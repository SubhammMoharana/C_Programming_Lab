//ENter two variables. Determine the largest one using pointer variables
#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int *x,*y;
	x = &a;
	y = &b;
	if(*x>*y)
	{
		printf("%d is greater",*x); 
	}
	else{
		printf("%d is greater",*y);
	}
	return 0;
}
