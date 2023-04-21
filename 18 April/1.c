#include<stdio.h>
int main()
{
	int arr[30],num,temp,x,y,count=0;
	printf("Enter the number of element you want to enter");
	scanf("%d",&num);
	printf("Enter the elements");
	for(x=0;x<num;x++){
		scanf("%d",&arr[x]);
	}
	//logic
	for(x=0;x<num-1;x++){
		for(y=0;y<(num-x)-1;y++){
			if(arr[y]>arr[y+1]){
				//swapping
				temp=arr[y];
				arr[y]=arr[y+1];
				arr[y+1]=temp;
				count+=y;
			}
		}
	
	}
	//printing
	for(x=0;x<num;x++){
		printf("%d ",arr[x]);
		
	}
	printf("\nIteration used is %d\n",count);
	return 0;
}
