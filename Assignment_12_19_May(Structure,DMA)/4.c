#include<stdio.h>
struct books{
    char name[12];
    int pages;
};
int main()
{
    struct books b[3] = {{"a",1},{"b",2},{"x",3}};
    for(int i = 0; i<3; i++)
    {
        printf("***For BOOK %d****\n",i+1);
        printf("Book Name: %s\n",b[i].name);
        printf("Book Pages: %d\n",b[i].pages);
    }
    return 0;
}