// Reverse an array without taking extra space.

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
    for ( int j=0 ; j<n/2; j++){
        int temp = arr[j];
        arr[j]=arr[n-1-j];
        arr[n-j-1]=temp;
        }
      
    for ( int j=0 ; j<n ; j++){
        printf(" %d ", arr[j]);
    } 
    return 0;
}