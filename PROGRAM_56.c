// Read and print elements of a one-dimensional array.

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

    return 0;

}