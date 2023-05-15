//count vowels in a string using a pointer
#include<stdio.h>
int main()
{
    char str[100];
    char *ptr;
    printf("Enter a string in lower case");
    scanf("%[^\n]%*c",str);
    ptr = str;
    int num = 0;
    while(*ptr!=0){
            if(*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
            num++;
            ptr++;
    }
    printf("total vowel is %d",num);
    return 0;
}