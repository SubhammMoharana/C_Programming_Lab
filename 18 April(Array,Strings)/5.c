/*Enter one string through user input. Print the first letters of all the words.
Like input - I am a student of KIIT University Output - IaasoKU C prog*/
#include <stdio.h>
#include <string.h>
    int
    main()
{
    char arr[30];
    int i, length;

    printf("Enter strings");
    gets(arr);
    length = strlen(arr);
    // print the first letter of the first word
    printf("%c", arr[0]);
    // Rest Element
    for (i = 1; i < length; i++)
    {
        if (arr[i] == ' ')
        {
            printf("%c", arr[i + 1]);
        }
    }
    return 0;
}