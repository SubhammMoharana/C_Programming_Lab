//Take string as input and print in reverse order.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    char *ptr;
    printf("Enter a string");
    scanf("%[^\n]%*c",str);
    ptr  = str;
    //printing revrse strinfg
    for(int i = strlen(str); i>=0; i--){
        printf("%c",*(str+i));
    }
    return 0;
}