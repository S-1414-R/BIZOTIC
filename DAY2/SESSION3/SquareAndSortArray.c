#include<stdio.h>
int main(){
    int arr[]={-4,-1,0,3,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int squaredArr[n];      
    for(int i=0; i<n; i++){
        squaredArr[i] = arr[i] * arr[i];
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(squaredArr[j] > squaredArr[j+1]){
                int temp = squaredArr[j];
                squaredArr[j] = squaredArr[j+1];
                squaredArr[j+1] = temp;     
            }
}
    }
    printf("Sorted squared array: ");
    for(int i=0; i<n; i++){
        printf("%d ", squaredArr[i]);
    }
    printf("\n");
    return 0;
}