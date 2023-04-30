//Send two number to a function and determine the max
#include<stdio.h>
int max(int num1,int num2);
int main(){
	int a = 1;
	int b = 3;
	int res = max(a,b);
	printf("Max value is %d\n",res);
	return 0;
}
int max(int num1,int num2)
{
	int result;
	if(num1>num2){
		result = num1;
	}
	else
	{
		result = num2;
	}
	

}



