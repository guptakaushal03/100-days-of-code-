// Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, j = 0,  maxstart=0 , maxlen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0;  ; i++) {
        
        if (str[i]==' '||str[i]!='\0')
            j++;
        else{
         if(maxlen<j){
                maxlen=j;
                maxstart=i-j;
            } 
            j=0; 
            if(str[i]=='\0')
                break;
        }
    }
    printf("Longest word: ");
    for(i= maxstart; i < maxstart+maxlen ; i++){
        printf("%c",str[i]);
    }
    printf("\nLength: %d\n", maxlen);

    return 0;
}