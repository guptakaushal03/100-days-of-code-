//Q2 (User Inputs, Operations & Output)
//Write a program to input two numbers and display their sum, difference, product, and quotient


#include <stdio.h>
int main() {
    int a,b;
    printf("ENTER NUMBER 1: ");
    scanf("%d",&a);
    printf("ENTER NUMBER 2: ");
    scanf("%d",&b);
    printf("Sum : %d ", a+b);
    printf("Difference : %d ", a-b);
    printf("Product : %d ", a*b);
    float q =(float) a/b ;
    printf("Quotient: %.3f ", q);
    return 0;
    }

