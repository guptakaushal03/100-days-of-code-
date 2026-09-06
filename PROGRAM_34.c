// Write a program to check if a number is prime.

#include <stdio.h>
#include <math.h>
int main(){
    int a,i,flag;
    printf("ENTER NUMBER : ");
    scanf("%d",&a);
    if (a <= 1) {
        printf("%d is not prime.\n", a);
        return 0;
    }
    for(i = 2; i <= sqrt(a) ; i++ ) {
        if(a%i==0){
            flag=1;
            break;
        }
    }
    if (flag == 0){
        printf("%d is prime.\n", a);
    }
    else{
        printf("%d is not prime.\n", a);
    }

    return 0;

}