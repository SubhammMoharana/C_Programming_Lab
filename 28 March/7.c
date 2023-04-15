// Search an element within the array (including not found error)
#include<stdio.h>
int main()
{
    int search,found=0;
    int arr[4] = {1,4,56,11};
    printf("Enter the character");
    scanf("%d", &search);
    //searching
    for(int i = 0; i<4; i++){
        if (arr[i] == search){
            printf("found");
            found = 1;
            
            break;
        }
    }
    //Not Found Case
    if(found == 0){
        printf("NOT FOUND");
    }
    return 0;
}