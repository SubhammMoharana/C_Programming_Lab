//Swap two variables using pointers in function.
#include<stdio.h>
int swap(int *a,int *b);
int main()
{
	int x = 3;
	int y = 4;
	printf("The value of x and y is %d and %d\n",x,y);
	swap(&x,&y);
	printf("The value of x and y is %d and %d\n",x,y);
	return 0;
}
int swap(int *a,int *b)
{
	int  t;
	t = *a;
	*a = *b;
	*b = t;
}
