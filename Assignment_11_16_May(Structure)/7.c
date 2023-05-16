/*
WAP to store 3 employees' data such as employee name, gender, designation, department, basic
pay etc using structures Calculate the gross pay of each
employees as follows:
Gross pay=basic pay + HR + DA
HR=25% of basic, DA=75% of basic
*/
#include<stdio.h>

struct employee {
    char name[20];
    char gender;
    float basicPay;
};

int main() {
    struct employee emp[3] = {
        {"A", 'M', 12000},
        {"B", 'M', 31000},
        {"C", 'F', 19000}
    };

    for(int i = 0; i < 3; i++) {
        float HR = 0.25 * emp[i].basicPay;
        float DA = 0.75 * emp[i].basicPay;
        float grossPay = emp[i].basicPay + HR + DA;

        printf("\nName: %s\n", emp[i].name);
        printf("Gender: %c\n", emp[i].gender);
        printf("Gross pay: %.2f\n", grossPay);
    }

    return 0;
}
