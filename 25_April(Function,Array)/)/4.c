//initialize an array with your roll number and roate the values (1 position)
#include <stdio.h>

int main() {
  int roll_no[5] = {12, 2, 3, 4, 5}; 
  int temp = roll_no[4]; 
  
  // shift array elements to the right by one position
  for (int i = 5; i >= 1; i--) {
    roll_no[i] = roll_no[i-1];
  }
  roll_no[0] = temp; // set first element to temporary variable
  
  // print out the rotated array
  printf("Original Array: ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", roll_no[i]);
  }
  
  return 0;
}