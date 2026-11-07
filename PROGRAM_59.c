// Count even and odd numbers in an array.

#include <stdio.h>
void evenodd(int arr[],int n);
int main(){
    printf("Number of element of array:");
    int i,n;
    scanf("%d",& n) ;
    int arr[n];
    for (i=0;i<n;i++){
        printf("ENTER %d element:",i+1);
        scanf("%d",& arr[i]);
    }    
    evenodd(arr,n);
    return 0;
}

void evenodd(int arr[] , int n ){
    int even=0;
    int odd=0;
    for (int j =0 ; j < n ; j++){
        if(arr[j]%2==0){
            even++;}
        else{
            odd++;
        }
            
        }
    printf("EVEN NUMBER OF ELEMENT IN ARRAY : %d \n",even);
    printf("ODD NUMBER OF ELEMENT IN ARRAY : %d\n",odd);  

    }

