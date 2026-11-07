// Check if the elements on the diagonal of a matrix are distinct.



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
        for(j=1+i;j<n;j++){
            if ( arr[i][i]==arr[j][j]){
                m++;
            }        
        } 
    } 

    if(m == 0)
{
    printf("ALL DIAGONAL ELEMENTS ARE DISTINCT");
}
else
{
    printf("ALL DIAGONAL ELEMENTS ARE NOT DISTINCT");
}



    return 0;

}