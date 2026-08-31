//Q5 (User Inputs, Operations & Output)

//Write a program to convert temperature from Celsius to Fahrenheit.


#include <stdio.h>
int main() {
    float a;
    printf("ENTER TEMPERATURE IN CELSIUS : ");
    scanf("%f",&a);
    
    float b= 1.8*a+32 ;
    
    printf("TEMPERATURE IN Fahrenheit : %.3f ", b);
    return 0;
    }

