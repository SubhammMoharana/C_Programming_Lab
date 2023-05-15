//Store your marks of 5 subjects in class 12 in an array using pointer. Compute total and avg
#include<stdio.h>
int main()
{
    int arr[5];
    //taking input 
    printf("Enter your marks of 5 Subjects");
    for(int i = 0; i<5; i++){
        scanf("%d",arr+i); //same as arr[i]
    }
    int sum = 0;
    for(int j = 0; j<5; j++){
        sum += *(arr+j);
    }
    double avg = (double)sum / 5;
    printf("Total marks is : %d\n",sum);
    printf("Average value is : %f\n",avg);
    return 0;
}