// Check if Two Strings are Anagrams

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq[26] = {0};
    int i = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    while (str1[i] != '\0' && str1[i] != '\n') {
        freq[str1[i] - 'a']++;
        i++;
    }

    i = 0;

    while (str2[i] != '\0' && str2[i] != '\n') {
        freq[str2[i] - 'a']--;
        i++;
    }

    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");

    return 0;
}