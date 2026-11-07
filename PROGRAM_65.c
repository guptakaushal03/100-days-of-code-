// Search in a sorted array using binary search.

#include <stdio.h>
int main(){
    printf("Number of element of array:");
    int i,n,fou=0;
    scanf("%d",& n) ;
    int arr[n];
    for (i=0;i<n;i++){
        printf("ENTER %d element:",i+1);
        scanf("%d",& arr[i]);
    }    
    printf("ENTER NUMBER YOU WANT TO FIND INDEX  "); 
    int in;
    scanf("%d",&in);
    for ( i = 0 ; i < n ; i++){
        if (arr[i]==in){
            fou+=i;
            printf("INDEX : %d ",fou);
        }
    }
    if(fou==0){
        printf("-1");
    }
    return 0;
}
