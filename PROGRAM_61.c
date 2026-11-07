// Search for an element in an array using linear search.

#include <stdio.h>
int main(){
    printf("Number of element of array:");
    int i,n,num,fou=0;
    scanf("%d",& n) ;
    int arr[n];
    for (i=0;i<n;i++){
        printf("ENTER %d element:",i+1);
        scanf("%d",& arr[i]);
    } 
    printf("ENTER NUMBER , YOU WANT TO FIND INDEX :") ;
    scanf("%d",&num);

    for ( i=0 ; i<n ; i++){
        if(arr[i]==num){
            fou++;
            printf("INDEX : %d",i);
        }
    }
    if(fou==0){
        printf("-1");
    }

    
    return 0;


}