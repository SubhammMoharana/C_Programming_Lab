// Compare structure one by one my its members
#include<stdio.h>
struct marks{
    int math;
    int chem;
};
int main()
{
    struct marks stud1 = {100,42};
    struct marks stud2 = {12,81};
    if((stud1.math+stud1.chem)>(stud2.math+stud2.chem))
    {
        printf("Student 1 score more with total mark of %d",stud1.math+stud1.chem);
    }
    else if((stud1.math+stud1.chem)==(stud2.math+stud2.chem)){
        printf("Both scored equal marks");
    }
    else{
        printf("Student 2 score more with total mark of %d",stud2.math+stud2.chem);
    }
    return 0;
}