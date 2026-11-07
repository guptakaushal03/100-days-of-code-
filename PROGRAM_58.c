// Find the maximum and minimum element in an array.


#include <stdio.h>
void MAXMIN ( int arr[] , int n);
int main(){
    printf("Number of element of array:");
    int i,n;
    scanf("%d",& n) ;
    int arr[n];
    for (i=0;i<n;i++){
        printf("ENTER %d element:",i+1);
        scanf("%d",& arr[i]);
    }   
    MAXMIN(arr,n);

    return 0;
}

void MAXMIN( int arr[] , int n){
    int max=arr[0];
    int min=arr[0];
    for ( int j = 1 ; j < n ; j++){
        if (arr[j] > max){
            max=arr[j];
        }
        if (arr[j] < min) {
            min=arr[j];
        }
    }
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
}