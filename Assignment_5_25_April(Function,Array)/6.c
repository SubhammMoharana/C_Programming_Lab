// write a program input element to an array and display the second biggest element
#include <stdio.h>
int main()
{
  int max1, max2, arr[5];
  // input
  printf("Enter the array of 5 elemnts");
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &arr[i]);
  }
  // logic for second highest number
  max1 = max2 = 0;
  for (int i = 0; i < 5; i++)
  {
    if (arr[i] > max1)
    {
      max2 = max1;
      max1 = arr[i];
    }
    else if (arr[i] > max2 && arr[i] < max1)
    {
      max2 = arr[i];
    }
  }
  printf("The second largest element is %d",max2);
  return 0;
}