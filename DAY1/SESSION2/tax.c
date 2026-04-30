#include<stdio.h>
int main(){
    int n;
    printf("enter the number of candidates\n");
    scanf("%d",&n);
    double income, tax=0;
    for(int i=0;i<n;i++){
        printf("enter the income of candidate %d\n",i+1);           
        scanf("%lf",&income);
        if(income<250000){
            printf("No tax\n");
        }
        else if(income>=250001&&income<500000){
            tax=12500+(income-250000)*0.05;
            printf("Tax is 5%%\n");
        }
        else if(income>=500001&&income<1000000){
            tax=112500+(income-500000)*0.20;
            printf("Tax is 20%%\n");
        }
        else{
            tax=312500+(income-1000000)*0.30;
            printf("Tax is 30%%\n");
        }
    }
    return 0;
}