//Q_13 Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>
int main() {
    int a;
    printf("ENTER YEAR");
    scanf("%d",&a);
    if(a%4 == 0  &&  a%100 != 0 ||  a%400 == 0) {
        printf(" leap year");
    }
    
    else{
        printf("not leap year");
    
    }
    return 0;
}