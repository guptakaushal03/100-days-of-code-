//Q3 (User Inputs, Operations & Output)
//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


#include <stdio.h>
int main() {
    int a,b;
    printf("ENTER LENGTH: ");
    scanf("%d",&a);
    printf("ENTER Breadth: ");
    scanf("%d",&b);
    printf("PERIMETER : %d ", 2*a+b*2);
    printf("AREA : %d ", a*b);
    return 0;
    }

