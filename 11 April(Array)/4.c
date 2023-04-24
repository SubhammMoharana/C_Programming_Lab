//3. Write a program to find largest element stored in an array
#include<stdio.h>
int main(){
    int arr[3] = {1,13,7};
    //checking
    int max = arr[0];
    for(int i = 1; i<3; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
}