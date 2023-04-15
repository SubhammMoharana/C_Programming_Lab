//2. Print the same array in the reverse order.
#include<stdio.h>
int main(){
    int arr[3] = {2,34,5};
    int rev[3];
    
    //reverse
    for(int i = 0; i<3;i++){
        rev[i] = arr[2-i];
    }
    //printing
    for(int i = 0; i<3; i++){
        printf("%d ",rev[i]);
    }
    return 0;
}