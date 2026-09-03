//Q_12 Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>
int main()  {
    int num;
    printf("ENTER NUMBER:");
    scanf("%d",&num);
    if(num%2==0){
        printf("EVEN");
    }
    else{
        printf("ODD");
    }

    return 0;
}