/*Create , Initialize , assign and access pointer variable. 
a) Print the value and address of a variable through the variable only
b) Print the value and address of a variable through a pointer.*/

#include<stdio.h>
int main()
{	
	int a = 5;; //inititalizing number
	int *ptr; //initializing pointer
	ptr = &a; //assigning
	//using variable
	printf("The address of the value is %p\n",&a);
	printf("The value of variable is %d\n",a);
	printf("The address of pointer value is %p\n",ptr);
	printf("The pointer value is %d\n",*ptr);
 	return 0;
}
