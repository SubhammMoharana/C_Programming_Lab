//WAP to print the fibonicco series using function
#include<stdio.h>
int fab(int n);
int main()
{	int n  = 4;
	printf("Given value of series is %d",fab(n));
	return 0;
}
int fab(int n)
{
	int f1=0;
	int f2=1;
	int f;
	if( n==0 || n==1){
		return n-1;
	}
	else{
		for(int i = 0; i<n-2; i++){
			f=f1+f2;
			f1=f2;
			f2=f;
	}
	return f;
	}
}

