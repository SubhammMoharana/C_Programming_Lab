//8. Print Fibonacci series using array.
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter number of terms");
    scanf("%d",&n);
    int fab[n];
    fab[0] = 0;
    fab[1] = 1;
    for(int i = 2; i<n; i++){
        fab[i] = fab[i-1] + fab[i-2];
    }
    //printing
    for(i = 0; i<n; i++){
        printf("%d ",fab[i]);
    }

    return 0;
}