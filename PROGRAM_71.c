
// Read and print a matrix.

#include <stdio.h>
int main(){
    printf("ROWS OF ARRAY:");
    int i,n,m,j;
    scanf("%d",& n); 
    printf("COLUMNS OF ARRAY:");
    scanf("%d",& m);
    int arr[n][m];
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

    printf("NUMBER OF ELEMENT IN ARRAY : %d",n*m);

    return 0;

}