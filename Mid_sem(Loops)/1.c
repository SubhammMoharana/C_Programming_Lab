/*
Q1. WAP to display the following pattern
		A
		BA
		ABC
		DCBA
		ABCDE
*/
#include<stdio.h>
int main()
{   
    int i,j;
    for(i = 1; i<=5; i++){
        if(i%2==1){
            for(j=1;j<=i;j++){
                printf("%c",j+64);
            }
        }
        else{
            for(j=i; j>=1; j--){
                printf("%c",j+64);
            }
            }
            printf("\n");
        }
        
    
    return 0;
}