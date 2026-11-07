// add two matrices.

#include <stdio.h>
int main(){
    printf("ROWS OF MATRIX:");
    int i,n,m,j;
    scanf("%d",& n); 
    printf("COLUMNS OF MATRIX:");
    scanf("%d",& m);
    int arr[n][m];
    printf("MATRIX 1: ");
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("ENTER arr[%d][%d] element:",i,j);
            scanf("%d",& arr[i][j]);
        }
        
        }
    printf("MATRIX 1: ");
    printf("\n");
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf(" %d ",arr[i][j]);
        } 
        printf(" \n"); 

    } 
    printf("MATRIX 2: ");
    int arr1[n][m];
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("ENTER arr1[%d][%d] element:",i,j);
            scanf("%d",& arr1[i][j]);
        }
        
        }

    printf("MATRIX 2: ");
    printf("\n");
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf(" %d ",arr1[i][j]);
        } 
        printf(" \n"); 

    } 

    int arr2[n][m];
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            arr2[i][j]=arr[i][j]+arr1[i][j];
        }
        
        }
    printf("SUM OF MATRIX : ");
    printf("\n");
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf(" %d ",arr2[i][j]);
        }
        printf(" \n"); 
    }
     

    return 0;
}