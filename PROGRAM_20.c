// Write a program to display the day of the week based on a number (1–7) using switch-case.


#include <stdio.h>
int main() {
    int a;
    printf("ENTER NUMBER(the day of the week based on a number 1 TO 7 ) : ");
    scanf("%d", &a);
    switch(a){
        case(1):
        printf("MONDAY");
        break;
        case(2):
        printf("TUESDAY");
        break;
        case(3):
        printf("WEDNESDAY");
        break;
        case(4):
        printf("THURSDAY");
        break;
        case(5):
        printf("FRIDAY");
        break;
        case(6):
        printf("SATURDAY");
        break;
        case(7):
        printf("SUNDAY");
        break;
        default:
        printf("INCORRECT INPUT");

    }
    return 0;
}
