// Find the transpose of a matrix.

#include <stdio.h>
int main(){
    printf("ROWS OF ARRAY:");
    int i,n,m,j;
    scanf("%d",& n); 
    printf("COLUMNS OF ARRAY:");
    scanf("%d",& m);
    int arr[n][m];
    int arr1[m][n];
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
    printf("NUMBER OF ELEMENT IN ARRAY : %d\n",n*m);
    printf("TRANSPOSE OF MATRIX \n");
    for (j=0;j<m;j++){
        for(i=0;i<n;i++){
            arr1[j][i]=arr[i][j];
           
            printf(" %d ",arr1[j][i]);
        } 
        printf(" \n"); 

    }
    return 0;
}