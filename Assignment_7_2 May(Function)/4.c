//WAP to calculate the power i.e x**y using function
#include<stdio.h>
int power(int x, int n);
int main()
{
	int a = 3;
	int b = 2;
	int resu = power(a,b);
	printf("%d",resu);
	return 0;
}
int power(int x, int n)
{
	int ans=1;
	for(int i = 1; i<=n; i++)
	{
		ans *= x;
	}
	return ans;

}

