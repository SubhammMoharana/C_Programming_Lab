//Write a prog of void pointers
#include<stdio.h>
int main()
{
    int a = 5;
    void *ptr;
    ptr = &a;
    //Storing int value to *ptr
    printf("The value of ptr is %d\n",*((int*)ptr));
    //Storing float value to *ptr
    float b = 3.4;
    ptr = &b;
    printf("The value of ptr is %f\n",*((float*)ptr));
    return 0;
}