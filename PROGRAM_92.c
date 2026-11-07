// Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};  // freq[0] = 0 freq[1] = 0 freq[2] = 0 ... freq[25] = 0
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;

            if (freq[str[i] - 'a'] == 2) {
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                return 0;       //    immediately ends the whole program.
            }
        }
        i++;
    }

    printf("No repeating lowercase alphabet found.\n");

    return 0;
}