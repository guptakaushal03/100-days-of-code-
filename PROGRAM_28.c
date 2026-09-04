// Write a program to print the product of even numbers from 1 to n.


#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;  // use long long for large results
    int foundEven = 0;      

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {  
        product *= i;
        foundEven = 1;
    }

    if (foundEven  == 1 )
        printf("Product of even numbers from 1 to %d = %d\n", n, product);
    else
        printf("No even numbers up to %d\n", n);

    return 0;
}