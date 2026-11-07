// Count frequency of a given character in a string.

#include <stdio.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("ENTER CHARACTER YOU WANT FIND FREQUENCY : ");
    char a;
    scanf("%c",&a);
    int fre = 0;
    int coun = 0;

    while (str[coun] != '\0') {
        if(str[coun] == a){
            fre++;
            
        }
        coun++;
    }
    printf(" FREQUENCY : %d",fre);
}