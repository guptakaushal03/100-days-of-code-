//Q8 Write a program to find and display the sum of the first n natural numbers.



#include <stdio.h>

int main() {
    int a,b;
    printf("SUM OF N NATURAL NUMBERS \n ");
    printf("ENTER N : " );
    scanf("%d",&a);
    b = a*(a+1)/2  ;
    printf(" SUM OF 1ST %d NATURAL NUMBER %d\n ", a, b);
    
    return 0;
}


