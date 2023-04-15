//7. Find and print the binary equivalent of a decimal number using array.
#include <stdio.h>

int main() {
    int decimal, i;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    int binary[32];  // Array to store the binary digits

    // Convert decimal to binary
    i = 0;
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    // Print the binary digits in reverse order
    printf("The binary equivalent is: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
