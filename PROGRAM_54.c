// Write a program to print the following pattern:

//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

#include <stdio.h>

int main() {
    for (int i = 1; i <= 4; i++) {
        for (int m = 3; m >= i; m--) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int k = 3; k >= 1; k--) {
        for (int l = 3; l >= k; l--) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * k - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
