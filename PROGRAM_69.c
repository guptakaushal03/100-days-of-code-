// Find the second largest element in an array.

#include <stdio.h>
int main(){
    printf("Number of element of array:");
    int i,n;
    scanf("%d",& n) ;
    int arr[n];
    for (i=0;i<n;i++){
        printf("ENTER %d element:",i+1);
        scanf("%d",& arr[i]);
    }    
    printf("ARRAY : [");
    for ( int j=0 ; j<n ; j++){
        printf(" %d ", arr[j]);
    }  
    printf("]");  
    int del = 0 ;
    int pos = 0 ;
    for ( i = 0 ; i < n ; i++){
        if (arr[i]>del){
            del=arr[i];
        }
    }
    for (i = 0 ; i<n; i++){
        if (arr[i]==del){
            pos=i;
            break;
        }
    }
    if ( pos > 0 ){
        for( i = pos ; i < n-1 ; i++){
        arr[i]=arr[i+1];
    }
    }
    int in = 0 ;
    for ( i = 0 ; i < n-1 ; i++){
        if (arr[i]>in){
            in=arr[i];
        }
    }
    printf(" \nSECOND LARGEST ELEMENT IN ARRAY %d : ", in);

    return 0;

}