// Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>
int main() {
    int a,num,last,temp,first,digits;
    printf("ENTER NUMBER : ");
    scanf("%d",&num);
    a=num;
    temp=num;
    last=a%10;
    printf("%d",last);
    while(temp >= 10) {   // loop to find first digit
         temp /= 10;
         digits++;
    }
    first = temp;
    digits++;
    int middle = num % (int)pow(10, digits-1);
    middle = middle / 10;  // remove last digit too

    // Construct swapped number
    int swapped = last * (int)pow(10, digits-1) + middle * 10 + first;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;

}