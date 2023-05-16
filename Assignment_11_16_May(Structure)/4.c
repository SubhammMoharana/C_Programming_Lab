//Declare three book
#include<stdio.h>
#include<string.h>
struct books{
    char title[30];
    int book_id;
};
int main()
{
    struct books book1;
    struct books book2;
    //for book 1;
    strcpy(book1.title,"C Prog");
    book1.book_id = 1234;
    //for book2
    strcpy(book2.title,"DSA");
    book2.book_id = 2345;
    //printing for book1;
    printf("The title of book 1 is %s\n",book1.title);
    printf("Book ID: %d\n",book1.book_id);
    //printing for book2;
    printf("The title of book 2 is %s\n",book2.title);
    printf("Book ID: %d\n",book2.book_id);
    return 0;
}