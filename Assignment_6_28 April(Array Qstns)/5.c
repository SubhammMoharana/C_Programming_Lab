#include <stdio.h>
int main() {
    int decimal = 255;
    char hex[10];
    int i;

    for (i = 0; decimal != 0; i++) {
        int remainder = decimal % 16;

        if (remainder < 10) {
            hex[i] = remainder + 48;
        } else {
            hex[i] = remainder + 55;
        }

        decimal = decimal / 16;
    }

    printf("Hexadecimal representation: 0x");

    for (int j = i - 1; j >= 0; j--) //ek kam se suru hog array read karna
    {
        printf("%c", hex[j]);
    }

    printf("\n");
}
