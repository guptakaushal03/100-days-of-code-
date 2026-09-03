// Write a program to input three numbers and find the largest among them using if–else.


#include <stdio.h>
int main() {
    int a,b,c;
    printf(" a : ");
    scanf("%d",&a);
    printf(" b : ");
    scanf("%d",&b);
    printf(" c : ");
    scanf("%d",&c);
    if(a > b){
        if(a>c & b>c){
            printf("a>b>c");
        }
        else if(a>c & c>b) {
            printf("a>c>b");
        }
    }
    else if(b > c){
        if(a>c & b>a){
            printf("b>a>c");
        }
        else if(a<c & c<b) {
            printf("b>c>a");
        }
    }    
    else if(c > a){
        if(a>b & c>b){
            printf("c>a>b");
        }
        else if(b>a & c>b) {
            printf("c>b>a");
        }        
    }

    return 0;

}   