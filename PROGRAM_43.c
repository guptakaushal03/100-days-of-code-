// Write a program to check if a number is a strong number.


#include <stdio.h>
int main(){
    int num,a,rem,i,fac,sum;
        printf("ENTER NUMBER :");
        scanf("%d",&num);
        a=num;
        sum=0;
        while(num>0){
            rem=num%10;
            fac=1;
            for(i=1;i<=rem;i++){
                fac*=i;
            }
            sum+=fac;
            num/=10;
        }
    if(a==sum){
        printf("STRONG NUMBER ");
    }
    else {
        printf(" NOT STRONG NUMBER ");
    }
    return 0;
}