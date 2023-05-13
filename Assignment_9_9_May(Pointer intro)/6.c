//WAP to find factorial using pointer
#include<stdio.h>
int main()
{
	int a = 3;
	int *pt;
	pt = &a;
	int fact = 1;
	int *factp;
	factp = &fact;
	
	for(int i = 1; i<=*pt; i++)
	{
		*factp = *factp * i;
	}
	printf("The factorial is %d",*factp);
	return 0;
}
