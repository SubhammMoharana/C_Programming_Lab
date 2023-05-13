//WAP add two integers using a pointer.
#include<stdio.h>
int main()
{
	int x = 3;
	int y = 4;
	int *a,*b;
	a = &x;
	b = &y;
	int result = *a + *b;
	printf("The sum is %d",result);
		
	return 0;
}
