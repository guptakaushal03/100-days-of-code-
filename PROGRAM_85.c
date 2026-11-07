//Reverse a string.


#include <stdio.h>
#include <string.h>
int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    strrev(str);
    printf("Reverse string :  %s\n",str);


    return 0;
}
