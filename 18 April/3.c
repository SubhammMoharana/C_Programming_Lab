// Declare two strings and copy content from one to another.
#include <stdio.h>
#include <string.h>
int main()
{
	char str[10] = "HEllo";
	char str2[10];
	// printf("%s",strcpy(str2,str));
	strcpy(str2, str);
	printf("%s", str2);
	return 0;
}
