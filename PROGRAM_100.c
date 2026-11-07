// Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k, len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    printf("All substrings are:\n");

    for (i = 0; i < len; i++) {          // Starting position
        for (j = i; j < len; j++) {      // Ending position
            for (k = i; k <= j; k++) {   // Print substring
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}