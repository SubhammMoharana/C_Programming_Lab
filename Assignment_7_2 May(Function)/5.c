//WAP to check wheather a number is in palindrome or not using function
#include<stdio.h>
int check_pal(int n);
int main()
{
	check_pal(1001);
	return 0;
}
int check_pal(int n)
{
	int rem;
	int rev;
	int og = n;
	while(n!=0){
		rem = n %10;
		rev = rev*10 + rem;
		n/=10;
		
	}
	if(og==rev){
		printf("Yes it is in palindrome");
	}
	else
	{
		printf("Sorry");
	}
}
