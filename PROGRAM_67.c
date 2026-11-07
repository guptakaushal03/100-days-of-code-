// Insert an element in an array at a given position.

#include <stdio.h>
int main(){
    printf("Number of element of array:");
    int i,n,num,pos;
    scanf("%d",& n) ;
    int arr[n+1];
    for (i=0;i<n;i++){
        printf("ENTER %d element:",i+1);
        scanf("%d",& arr[i]);
    }    
    printf("Enter number : ");
    scanf("%d", &num);
    printf("Enter INDEX : ");
    scanf("%d", &pos);
     for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = num;
    printf("Array after insertion:\n");
    for(i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}