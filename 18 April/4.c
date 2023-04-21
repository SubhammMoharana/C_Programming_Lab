#include<stdio.h>
#include<string.h>
int main(){

	int n,arr[100],i,key,first,last,middle;
	printf("Enter number of element");
	scanf("%d",&n);
	//enter
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the value");
	scanf("%d",&key);
	
	first=0;
	last=n-1;
	middle = (first+last)/2;
	while(first<=last){
		if(arr[middle]<key){
			first = middle + 1;
		}
		else if(arr[middle]==key){
			printf("%d found at location %d",key,middle+1);
			break;
		}
		else{
			last = middle - 1;
			middle = (first+last)/2;
		}
		if(first>last){
			printf("Not found");
		}
	}
	
		
	return 0;
}
