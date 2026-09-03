// Q_1Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>
int main()
{
    float num;
    printf("ENTER NUMBER:");
    scanf("%f",&num);
    if(num > 0){
        printf("postive");

    }
    else if(num < 0){
        printf("negative");
    }
    else{
        printf("zero");
    
    }
    return 0;

}