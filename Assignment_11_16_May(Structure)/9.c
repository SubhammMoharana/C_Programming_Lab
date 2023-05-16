//adding two structure
//inch-feet sum.
#include<stdio.h>
struct dist{
    int feet;
    float inch;
};
int main()
{
    struct dist d1,d2,d;
    //input
    printf("for d1\n");
    scanf("%d",&d1.feet);
    scanf("%f",&d1.inch);
    printf("for d2");
    scanf("%d",&d2.feet);
    scanf("%f",&d2.inch);
    //adding
    d.feet = d1.feet+d2.feet;
    d.inch = d1.inch+d2.inch;
    //checking condition
    if(d.inch>12){
        d.inch = d.inch - 12;
        ++d.feet;
    }
    printf("Sum of distance is %d %f",d.feet,d.inch);
    return 0;
}