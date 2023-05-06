//WAP to print the prime series number from 1 to n using function
#include<stdio.h>
int prime_series(int n);
int main()
{	
	int n;
	printf("Enter the series to be printed");
	scanf("%d",&n);
	prime_series(n);
	return 0;
}
int prime_series(int n)
{
	int count;
	for(int i = 1; i<n; i++)
	{
		count = 0;
		for(int j=2; j<=i/2; j++){
			if(i%j==0)
			{
				count ++;
				break;
			}
			
		}
		if(count == 0 && i!=1){
		printf("%d",i);
		}
	}
}

