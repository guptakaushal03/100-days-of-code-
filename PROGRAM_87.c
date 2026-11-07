// Count spaces, digits, and special characters in a string.

#include <stdio.h>

int main() {
    char str[100];
    int al=0,di=0,sp=0,pa=0;
    int count=0;


    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    

    while ( str[ count ] != '\0'){
        char ch = str[count];

    
        if (ch >= 'A' && ch <= 'Z') {
        al++;;
    }

    else if (ch >= 'a' && ch <= 'z') {
        al++;
    }
    
    else if (ch >= '0' && ch <= '9') {
        di++;
    }
    
    else if ( ch == ' '){
        pa++;
    }
    else if (ch != '\n') {
       sp++;
    }

    count++;
    }
    
    printf("NUMBER OF SPACES : %d\n",pa);
    printf("NUMBER OF SPECIAL CHRACTERS  : %d\n",sp);
    printf("NUMBER OF DIGITS : %d\n",di);
    return 0;
}