//print a string using a pointer
#include<stdio.h>
int main()
{
    char str[100];
    char *ptr;
    printf("Enter a string");
    scanf("%[^\n]%*c",str);
    ptr = str;
    while(*ptr!=0){
            printf("%c",*ptr);
            ptr++;
    }
    return 0;
}