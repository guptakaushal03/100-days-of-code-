// Replace spaces with hyphens in a string.
#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[count] != '\0') {

        if(str[count] == ' '){
            str[count]='-';
        }
        count++;
    }


    count=0;
    while (str[count] != '\0') {
        printf("%c",str[count]);
        count++;
    }


    printf("Number of characters = %d\n", count);

    return 0;
}