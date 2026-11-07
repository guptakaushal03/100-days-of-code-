// Print each character of a string on a new line.

#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[count] != '\0') {
        printf("%c\n",str[count]);
        count++;
    }

    printf("Number of characters = %d\n", count);

    return 0;
}