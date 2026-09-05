// Write a program to reverse a given number.


#include <stdio.h>
int main () {
    int num ,rev,rem;
    printf("ENTER NUMBER : ");
    scanf("%d",&num);
    rev=0;
    while(num != 0){
        rem=num%10;
        rev = rev*10 + rem ;
        num=num/10;

    }
    printf("Reversed number: %d\n ",rev);

    return 0;


}