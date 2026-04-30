
#include<stdio.h>
int main(){
    int n, b;
    printf("Enter the n and b: ");
    scanf("%d %d", &n, &b);
    int price[n];
    for(int i=0; i<n; i++){
        printf("Enter the price of item %d: ", i+1);
        scanf("%d", &price[i]);
    }
    int left = 0, right = n - 1;
    int found = 0;
    while(left < right){
        int sum = price[left] + price[right];
        if(sum == b){
            found = 1;
            break;
        } else if(sum < b){
            left++;
        } else {
            right--;
        }
    }
    if(found){
        printf("Pair found that sums to %d.\n", b);
    } else {
        printf("No pair found that sums to %d.\n", b);
    }
    return 0;
}