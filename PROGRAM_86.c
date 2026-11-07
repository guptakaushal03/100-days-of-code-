// Check if a string is a palindrome.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    strcpy(temp, str);      // Save original string

    if (strcmp(str, temp) == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}