/*
Q1.WAP to display the following pattern
		ABCDEFGHI
		 BCDEFGh
		  CDEFg
		   DEf
			E
*/
#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=5;i>=1;i--)
    {
        //spaces
        for(j=5;j>i;j--)
        {
            printf("-");
        }
        //Letter
        for(j=1;j<=(i*2)-1;j++)
        {
            printf("%c",j+64);
        }
        printf("\n");
    }
    return 0;
}
