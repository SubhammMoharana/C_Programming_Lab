//WAP to calculate sum of element of an array using fucntion
#include<stdio.h>
int sum_array(int a[],int n);
int main()
{
	int a[100];
	int n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	for(int i = 0; i<n; i++){
		scanf("%d",&a[i]);
	}
	printf("Answer is %d",sum_array(a,n));
	return 0;
}
int sum_array(int a[],int n){
	int sum = 0;
	for(int j = 0; j<n; j++)
	{
		sum += a[j];
	}
	return sum;
}
