//write a program initialize your roll no. to an array
#include <stdio.h>

int main() {
  int roll_no = 12345; 
  int roll_digits[5];
  
  // initialize array with roll number digits
  for (int i = 0; i < 5; i++) {
    roll_digits[i] = roll_no % 10;
    roll_no /= 10;
  }

  // print out the array
  printf("Roll Number: ");
  for (int i = 4; i >= 0; i--) {
    printf("%d", roll_digits[i]);
  }

  return 0;
}