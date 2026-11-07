// Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>
int main(){
    printf("ROWS OF ARRAY:");
    int i,n,m,j;
    scanf("%d",& n); 
    printf("COLUMNS OF ARRAY:");
    scanf("%d",& m);
    int arr[n][m];
    int arr1[n];
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("ENTER arr[%d][%d] element:",i,j);
            scanf("%d",& arr[i][j]);
        }
        
        }
    printf("ARRAY: ");
    printf("\n");
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf(" %d ",arr[i][j]);
        } 
        printf(" \n"); 

    } 
    for (i=0;i<n;i++){
        int sum = 0 ;
        for(j=0;j<m;j++){
            sum+=arr[i][j];
        } 
        arr1[i]=sum;
    }
    printf("SUM OF EACH ROW OF MATRIX  \n ");
    printf("ARRAY : [");
    for ( int j=0 ; j<n ; j++){
        printf(" %d ", arr1[j]);
    }  
    printf("]");  


    

    return 0;

}