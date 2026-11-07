// Print the initials of a name.


#include <stdio.h>

int main() {
    char str[100];

    printf("Enter your name: ");
    fgets(str, sizeof(str), stdin);

    printf("Initials: ");

    if (str[0] != ' ')
        printf("%c.", str[0]);

    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ' && str[i] != ' ') {
            printf("%c.", str[i]);
        }
    }

    printf("\n");

    return 0;
}