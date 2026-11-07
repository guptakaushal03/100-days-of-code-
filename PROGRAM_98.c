// Print initials of a name with the surname displayed in full.

#include <stdio.h>

int main() {
    char str[100];
    int last = 0;

    printf("Enter your name: ");
    fgets(str, sizeof(str), stdin);

    // Find starting position of surname
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            last = i + 1;
    }

    // Print initials of all words except surname
    printf("Output: ");

    if (last > 0) {
        printf("%c.", str[0]);

        for (int i = 1; i < last - 1; i++) {
            if (str[i - 1] == ' ' && str[i] != ' ')
                printf("%c.", str[i]);
        }
    }

    // Print surname
    printf(" ");
    for (int i = last; str[i] != '\n' && str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}