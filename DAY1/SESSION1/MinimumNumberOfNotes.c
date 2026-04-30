#include<stdio.h>
int main(){
    printf("Enter Data here");
    int n=242;
int arr[]={100,50,20,10,5,2,1};
int count=0;
    for(int i=0;i<7;i++){
        count =n/arr[i];
        n=n%arr[i];
        printf("The number of %d notes is %d\n",arr[i],count);
    } 
        
    return 0;
}