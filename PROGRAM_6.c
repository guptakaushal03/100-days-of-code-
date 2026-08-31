//Q6 : Write a program to swap two numbers using a third variable.


#include <stdio.h>
int main() {
    float a;
    printf("ENTER NUMBER 1 : ");
    scanf("%f",&a);
    float b;
    printf("ENTER NUMBER 2 : ");
    scanf("%f",&b);
    float c;
    c=a-b;
    a=a-c;
    b=c+b;
    
    printf("NUMBERS AFTER SWAPING \n");
    printf(" NUMBER 1 : %.3f \n",a);
    printf(" NUMBER 2 : %.3f \n",b);
    
    
    
    return 0;
    }

