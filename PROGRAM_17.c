// Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>
int main() {
    int a,b,c,d,e,f,g ;
    printf("ENTER COEFFICIENT OF x SQUARE : ");
    scanf("%d",&a);
    printf("ENTER COEFFICIENT OF x  : ");
    scanf("%d",&b);
    printf("ENTER CONSTANT TERM : ");
    scanf("%d",&c);
    g = b*b-4*a*c  ;
    d = pow(b*b-4*a*c  , 0.5);
    e = (-b+d)/2 *a ;
    f = (-b-d)/2*a ;
    printf("ROOTS OF EQUATION : %d and %d  \n ",e , f);

    if(g > 0) {
        printf("ROOTS ARE REAL AND DIFFERENT ");
    }

    else if (d ==0 ){
        printf("ROOTS ARE SAME");
    }

    else {
        printf("ROOTS ARE COMPLEX");
    }

    return 0;



}