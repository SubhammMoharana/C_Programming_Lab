//write a program input element to an array and display the second biggest element#include <stdio.h>
#include <stdio.h>
int main() {
  int size, largest, second_largest;
  
  // input the size of the array
  printf("Enter the size of the array: ");
  scanf("%d", &size);
  
  // input elements to the array and find the largest and second largest elements
  int arr[size];
  printf("Enter the elements of the array:\n");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
    if (i == 0) {
      largest = arr[i];
      second_largest = arr[i];
    } else if (arr[i] > largest) {
      second_largest = largest;
      largest = arr[i];
    } else if (arr[i] > second_largest) {
      second_largest = arr[i];
    }
  }
  
  // print out the second largest element
  printf("The second largest element is: %d", second_largest);
  
  return 0;
}