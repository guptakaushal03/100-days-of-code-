//  Count vowels and consonants in a string.

#include <stdio.h>

int main() {
    char str[100];
    int count = 0;
    int u=0,v=0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[count] != '\0') {
        char n = str[count];
        if(n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' || n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U') {
        v++;
    
    }
    else if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z')) {
            u++;
        }


     
    count++;

    }

    printf("NUMBER OF CONSTANT  = %d\n", u);
    printf("NUMBER OF VOWEL   = %d\n", v);


    return 0;
}