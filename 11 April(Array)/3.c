//4. Write a program to find smallest element stored in an array.
#include<stdio.h>
int main(){
    int arr[3] = {1,13,7};
    //checking
    int min = arr[0];
    for(int i = 1; i<3; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("%d",min);
    return 0;
}