//WAP to store one students information (i.e. student’s roll no, name, gender, marks etc) of an educational institute and display all the data, using structure
#include<stdio.h>
struct Database{
    int roll;
    char name[20];
    char gender;
    int marks;
};
int main()
{
    struct Database std1 = {1212,"Name",'M',100}; 
    printf("Name:%s\n",std1.name);
    printf("Gender:%c\n",std1.gender);
    printf("Marks:%d\n",std1.marks);
    printf("Roll No.:%d\n",std1.roll);
    return 0;
}