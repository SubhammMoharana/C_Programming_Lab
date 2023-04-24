/* Replace a character in string with another one.
input : I am a computer engineer. Replace 'e' with 'E'
output : I am a computEr EnginEEr.*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char old_char, new_char;
    int i, len;

    // take input from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // take input for old and new character to replace
    printf("Enter the character to be replaced: ");
    scanf("%c", &old_char);

    printf("Enter the character to replace with: ");
    scanf(" %c", &new_char);

    len = strlen(str);

    // replace the old character with the new one
    for (i = 0; i < len; i++) {
        if (str[i] == old_char) {
            str[i] = new_char;
        }
    }

    // print the updated string
    printf("Updated string: %s", str);

    return 0;
}