//Q4 (User Inputs, Operations & Output)
//Write a program to calculate the area and circumference of a circle given its radius.


#include <stdio.h>
int main() {
    int a;
    printf("ENTER RADIUS : ");
    scanf("%d",&a);
    float b= (float) 3.14 ;
    
    printf("CIRCUMFERENCE : %.3f ", 2*b*a);
    printf("AREA : %.3f ", b*a*a);
    return 0;
    }

