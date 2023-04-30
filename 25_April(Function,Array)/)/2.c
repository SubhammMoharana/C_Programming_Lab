//write a fucntion to find factorial of number 
#include<stdio.h>
int fact(int num);
int main(){

	int a = 3;
	int res = fact(a);
	printf("The answer is %d\n",res);
	return 0;
}
int fact(int num)
{
	int fact = 1;
	for(int c = 1; c<=num; c++){
		fact *= c; 
		
	}
	return fact;

}
