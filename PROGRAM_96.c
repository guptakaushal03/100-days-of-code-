// Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, start = 0, end;

    fgets(str, sizeof(str), stdin);

    for(i = 0; ; i++) {  // Keep going until the end of the string is found.
        if(str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            end = i - 1;

            while(start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            start = i + 1;
        }

        if(str[i] == '\0' || str[i] == '\n')
            break;
    }

    printf("%s", str);

    return 0;
}
