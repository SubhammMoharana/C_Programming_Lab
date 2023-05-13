/*Print different size of pointer vaiables :
declare variables of int, float, double and char. Then use sizeof operator*/
#include<stdio.h>
int main()
{
	int *in;
	char *ch;
	long *lg;
	printf("size is of *int is %ld\n",sizeof(*in));
	printf("size is of *char is %ld\n",sizeof(*ch));
	printf("size is of *long int is %ld\n",sizeof(*lg));
	return 0;
}
