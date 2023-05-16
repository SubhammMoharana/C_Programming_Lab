#include<stdio.h>
struct Database{
int ID;
int salary;
};
int main()
{
    struct Database emp; //first intialization
    emp.ID = 1234;
    emp.salary = 20000;
    printf("The ID is %d\n",emp.ID);
    printf("The salary is %d",emp.salary);
    return 0;
}