//pass array to function through pointer and calculate avg of elements
#include<stdio.h>
int normalavg(int arr[], int size);
int avg(int *arr, int size);
int main()
{
    int arr[5] = {1,2,3,4,5};
    double avg1 = normalavg(arr,5);
    printf("The average value without pointer is %f\n",avg1);
    double avg2 = avg(arr,5);
    printf("The average value is %f\n",avg2);
    return 0;
}
int normalavg(int arr[], int size)
{
    int sum = 0;
    double avg_n;
    for(int i = 0; i<size; i++){
        sum += arr[i]; //array ka address ka value same as arr[i]
    }
    avg_n = (double)sum / size;
    return avg_n;
}
int avg(int *arr, int size)
{
    int sum = 0;
    double avg;
    for(int i = 0; i<size; i++){
        sum += *(arr+i); //array ka address ka value same as arr[i]
    }
    avg = (double)sum / size;
    return avg;
}