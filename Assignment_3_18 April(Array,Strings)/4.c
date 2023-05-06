// Declare a string and initialise as "Computer Programming Lab". Print the full string and also print the first 8 letters.
#include <stdio.h>
int main()
{
	char str[20] = "Computer Programming";
	printf("Priniting the string name: %s\n", str);
	printf("First 8 element is %.8s\n", str);

	return 0;
}