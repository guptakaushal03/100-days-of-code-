// Delete an element from an array.

#include <stdio.h>
int main(){
    printf("Number of element of array:");
    int i,n,del,pos=0;
    scanf("%d",& n) ;
    int arr[n];
    for (i=0;i<n;i++){
        printf("ENTER %d element:",i+1);
        scanf("%d",& arr[i]);
    }    
    
    printf("ARRAY : [");
    for ( int j=0 ; j<n ; j++){
        printf(" %d ", arr[j]);
    }    
    printf("]\n"); 
    printf("ENTER ELEMENT YOU WANT TO DELETE FROM ARRAY : ");
    scanf("%d",&del);
    for (i = 0 ; i<n; i++){
        if (arr[i]==del){
            pos=i;
            break;
        }
    }
    if ( pos > 0 ){
        for( i = pos ; i < n-1 ; i++){
        arr[i]=arr[i+1];
    }
    printf("Array after deletation:\n");
    printf("ARRAY : [");
    for(i = 0; i < n -1; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
    }

    if ( pos == 0 ){
        printf( " YOUR INPUT NOT BELONG TO ARRAY \n");
    }
    return 0;

}