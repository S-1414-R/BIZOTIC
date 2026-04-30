#include <stdio.h>
int main(){
    int units;
    printf("Enter the number of units consumed: ");
    scanf("%d",&units);
    int bill=0;
    scanf("%d",&bill);
    if (units<=100){
        bill=units*2;
    }
    else if(units<=300){        
        bill=(100*2)+((units-100)*4);
    }
    else if(units<=500){
        bill=(100*2)+(200*4)+((units-300)*6);
    }
    else{
        bill=(100*2)+(200*4)+(200*6)+((units-500)*10);
    }
    printf("The electricity bill is: %d\n", bill);
}