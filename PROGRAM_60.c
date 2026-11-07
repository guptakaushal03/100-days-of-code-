// Count positive, negative, and zero elements in an array.

#include <stdio.h>
void posneg(int arr[],int n);
int main(){
    printf("Number of element of array:");
    int i,n;
    scanf("%d",& n) ;
    int arr[n];
    for (i=0;i<n;i++){
        printf("ENTER %d element:",i+1);
        scanf("%d",& arr[i]);
    }    
    posneg(arr,n);
    return 0;
}

void posneg(int arr[] , int n ){
    int positive=0;
    int negative=0;
    int zero=0;
    for (int j =0 ; j < n ; j++){
        if(arr[j]>0){
            positive++;
        }
        else if (arr[j]<0) { 
            negative++;
        }   
        else{
            zero++;
        }
            
        }
    printf("POSITIVE NUMBER OF ELEMENT IN ARRAY : %d \n",positive);
    printf("NEGATIVE NUMBER OF ELEMENT IN ARRAY : %d\n",negative); 
    printf("ZERO NUMBER OF ELEMENT IN ARRAY : %d\n",zero);  

    }
