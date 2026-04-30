#include<stdio.h>
int main(){
    int s,B;
    printf("Enter the number of seats in the bus: ");
    scanf("%d",&s);
    printf("Enter the number of booked seats: ");
    scanf("%d",&B);
    int bookedSeats[B];
    if(B==0){
        printf("FIRSTSEAT WE GOT HURRY");
        return 0;
    }
    int low=0,high=B-1, mid;
    while(low<=high){
        mid=low+high/2;
        if(bookedSeats[mid]==mid+1){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(low==B){
        if(B==S){
            printf("SORRY BUS IS FULL");
        }
        else{
            printf("FIRST SEAT AVAILABLE:%d", B+1);
        }
    }
}