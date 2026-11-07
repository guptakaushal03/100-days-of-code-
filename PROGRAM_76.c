//Check if a matrix is symmetric.

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
    int p = n*m ;
    int q =0 ;

    printf("NUMBER OF ELEMENT IN ARRAY : %d",p);
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            if (arr[i][j]==arr[j][i]){
                q++;
            }
        } 
        printf(" \n"); 

    } 
    if(p == q){
        printf(" SYMMETRIC ");
    }
    else{
        printf(" NOT SYMMETRIC ");

    }

    return 0;

}