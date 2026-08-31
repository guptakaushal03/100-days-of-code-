//Q9 Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>
int main() {
    int a,b,c,d,e,f;
    printf("PRINCIPAL: ");
    scanf("%d",&a);
    printf("RATE : ");
    scanf("%d",&b);
    printf("TIME: ");
    scanf("%d",&c);
    d=(a*b*c)/100;
    e=pow(1+(b/100),c);
    f=a*e ;
    printf("SIMPLE INTEREST : %d\n" , d);
    printf("COMPOUND INTEREST : %d\n" , f);
    
    return 0;
    }