// Copy Structure
#include<stdio.h>
struct database{
    int ID;
    int salary;
    char section;
};
int main()
{
    struct database emp1 = {1,12000,'b'};
    struct database emp2; //new one
    //copying 
    emp2 = emp1;
    //printing
    printf("emp2 have a salary of Rs %d ID:%d belonging to %c",emp2.salary,emp2.ID,emp2.section); 
    return 0;
}