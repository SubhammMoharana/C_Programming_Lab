//Add two times using structures like 9 hr 23 m 26 sec + 9 hr 40 min 40 sec
#include<stdio.h>
struct time{
    int hour;
    int min;
    int sec;
};
int main()
{
    struct time t1,t2,t;
    printf("ENTER FOR T1\n");
    printf("Enter Hour:");
    scanf("%d",&t1.hour);
    printf("Enter min:");
    scanf("%d",&t1.min);
    printf("Entre Sec");
    scanf("%d",&t1.sec);
    printf("ENTER FOR T2\n");
    printf("Enter Hour:");
    scanf("%d",&t2.hour);
    printf("Enter min:");
    scanf("%d",&t2.min);
    printf("Entre Sec");
    scanf("%d",&t2.sec);
    t.hour = t1.hour + t2.hour;
    t.min = t1.min + t2.min;
    t.sec = t1.sec + t2.sec;
    if(t.sec>60){
        t.sec = t.sec - 60;
        ++t.min;
    }
    if(t.min>60){
        t.min = t.min - 60;
        ++t.hour;
    }
    printf("%d Hour %d Min %d Sec",t.hour,t.min,t.sec);
    return 0;
}