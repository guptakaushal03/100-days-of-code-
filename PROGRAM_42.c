// Write a program to check if a number is a perfect number.

#include <stdio.h>
int main() {
    int num,sum,rem,a,i;
    printf("ENTER NUMBER : ");
    scanf("%d",&num);
    sum=0;
    a=num;
    for( i = 1; i < num; i++) {
        if(num % i == 0) {
            sum += i;  
        }
    }
    if(sum==a){
        printf("PERFECT NUMBER ");
    }
    else {
        printf("NOT PERFECT NUMBER ");
    }
    return 0;
}   