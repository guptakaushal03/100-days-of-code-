// Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main() {
    int rem,ram,sum,a;
    sum=1;
    ram=0;
    printf("ENTER NUMBER : ");
    scanf("%d",&a);
    while(a!=0){
        rem=a%10;
        a=a/10;
        if(rem%2!=0){
             sum*=rem;
        }
        else {
            ram*=rem;
        }
    }
    printf("PRODUCT OF ODD DIGIT NUMBER IS  %d",sum);
    return 0;
}