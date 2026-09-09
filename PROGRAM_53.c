// Write a program to print the following pattern:
// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
// *

#include <stdio.h>
int main(){
    for (int i =1 ; i<=5 ; i++){
        for ( int k=1 ; k<=2*i - 1 ; k++ ) {
            printf("*");
        }
        printf("\n");    
        
    }
    for ( int j = 4 ; j>= 1 ; j--){
        for ( int m = 1 ; m<=2*j - 1 ; m++){
            printf("*");
        }
        printf("\n");
    }
    return 0 ;

}