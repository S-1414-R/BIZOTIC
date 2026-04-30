#include<stdio.h>
int climbingStairs(int n){
    if(n==0 || n==1){
        return 1;
    }
    return climbingStairs(n-1)+climbingStairs(n-2);
}
int main(){
    int N=4;
    printf("Number of ways to climb %d stairs: %d\n", N, climbingStairs(N));
    return 0;
}