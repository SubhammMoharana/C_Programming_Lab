// WAP to add marks of 5 subjects of an student (user input), and print his total marks and percentage
#include <stdio.h>
int main()
{
    int marks[5];
    float sum = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    // percentage
    float per = sum / 5;
    printf("The total mark is %f", sum);
    printf("The Percentage and average is %f", per);
    return 0;
}