//Enter value of three variables. Determine the largest one using pointer variables
#include<stdio.h>
int main()
{
	int a = 2;
	int b = 5; 
	int c = 3;
	int *x,*y,*z;
	x = &a;
	y = &b;
	z = &c;
	if(*x>*y){
		if(*x>*z){
			printf("%d is largest",*x);
		}
		else{
			printf("%d is largest",*z);
		}
	}
	else{
		if(*y>*z){
			printf("%d is largest",*y);
		}
		else{
			printf("%d is largest",*z);
		}
	}
	return 0;
}
