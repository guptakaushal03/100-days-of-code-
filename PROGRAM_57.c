// Find the sum of array elements
 
#include <stdio.h>
void sum(int arr[],int n);
int  main(){
    printf("Number of element of array:");
    int i,n;
    scanf("%d",& n) ;
    int arr[n];
    for (i=0;i<n;i++){
        printf("ENTER %d element:",i+1);
        scanf("%d",& arr[i]);
    } 
    sum(arr ,n);    
    return 0;
}

void sum(int arr[],int n){
    int add=0;
    for( int m =0 ; m < n; m++){
        add+=arr[m];
    }
    printf("SUM  : %d",add);

}  