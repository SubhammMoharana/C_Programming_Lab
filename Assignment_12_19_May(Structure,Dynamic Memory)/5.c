#include<stdio.h>
struct books{
    char name[12];
    int pages;
};
int main()
{
    struct books b[100];
    int n;
    printf("Enter number of books");
    scanf("%d",&n);
    //input;
    for(int i = 0; i<n; i++)
    {
        printf("Enter Name:");
        scanf(" %[^\n]s", b[i].name);
        printf("Enter Pages");
        scanf("%d",&b[i].pages);
    }
    for(int i = 0; i<n; i++)
    {
        printf("***For BOOK %d****\n",i+1);
        printf("Book Name: %s\n",b[i].name);
        printf("Book Pages: %d\n",b[i].pages);
    }
    return 0;
}