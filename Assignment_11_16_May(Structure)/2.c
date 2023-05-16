//Initialize , populate and print structure : in a different way
#include<stdio.h>
struct database{
    int ID;
    int salary;
}emp;
int main()
{
    emp.ID = 1234;
    emp.salary = 20000;
    printf("The ID is %d\n",emp.ID);
    printf("The salary is %d",emp.salary);
    return 0;
    return 0;
}