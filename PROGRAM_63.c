// Merge two arrays.
#include <stdio.h>
int main(){
    printf("Number of element of 1st array :");
    int i,n,m;
    scanf("%d",& n) ;
    int arr1[n];
    for (i=0;i<n;i++){
        printf("ENTER %d element:",i+1);
        scanf("%d",& arr1[i]);
    }
    printf("Number of element of 2nd array :");
    scanf("%d",& m);
    int arr2[m];
    int a = m+n;
    for (i=0;i<m;i++){
        printf("ENTER %d element:",i+1);
        scanf("%d",& arr2[i]);
    }
    int arr[a];
    for ( i = 0  ; i < n ; i++ ){
        arr[i]=arr1[i];
    }
    for (i = n ; i < a ; i ++){
        arr[i]=arr2[i-n];
    } 
    printf(" NEW ARRAY : ");
    for( i = 0 ; i < a ; i++){
        printf(" %d ", arr[i]);
    }

    return 0;
}