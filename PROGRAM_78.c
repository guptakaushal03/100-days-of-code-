// Find the sum of main diagonal elements for a square matrix.





#include <stdio.h>
int main(){
    printf("For a diagonal matrix, the matrix must be square, meaning it has the same number of rows and columns. ✅ Diagonal matrix ⇒ n * n matrix only");
    printf("ENTER n :");
    int i,n,m=0,j;
    scanf("%d",& n); 
    int arr[n][n];
    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("ENTER arr[%d][%d] element:",i,j);
            scanf("%d",& arr[i][j]);
        }
        
        }
    printf("ARRAY: ");
    printf("\n");
    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf(" %d ",arr[i][j]);
        } 
        printf(" \n"); 

    } 
    for (i=0;i<n;i++){
        m+=arr[i][i];
     }          

    printf("\nSum of main diagonal elements = %d", m);
    return 0;
}