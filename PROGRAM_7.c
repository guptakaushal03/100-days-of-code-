//Q7 : Write a program to swap two numbers  without using a third variable.


#include <stdio.h>

int main() {
    float a, b;
    
    printf("ENTER NUMBER 1 : ");
    scanf("%f", &a);
    
    printf("ENTER NUMBER 2 : ");
    scanf("%f", &b);
    
    // Correct logic to swap without a third variable
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("NUMBERS AFTER SWAPING \n");
    printf("NUMBER 1 : %.3f \n", a);
    printf("NUMBER 2 : %.3f \n", b);
    
    return 0;
}
