// Toggle case of each character in a string.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;   // Uppercase to lowercase
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;   // Lowercase to uppercase
        }
        i++;
    }

    printf("Toggled string: %s", str);

    return 0;
}