#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}
int thirdMax(int nums[], int n){
    if(n <= 0) return 0;
    qsort(nums, n, sizeof(int), compare);
    int uniqueCount = 1;
    for(int i=1; i<n; i++){
        if(nums[i] != nums[i-1]){
            uniqueCount++;
        }
        if(uniqueCount == 3){   
            return nums[i];
        }
    }
    int count = 1;
    for(int i=1; i<n; i++){
        if(nums[i] != nums[i-1]){
            count++;
        }
        if(count == 3){
            return nums[i];
        }
    }
    return nums[n-1];
}
int main()
{
    int n;
    printf("Enter the number n\n: ");
    scanf("%d", &n);
    int nums[n];
    for(int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    printf("The sorted array is: \n");
    for(int i=0; i<n; i++){
        printf("%d ", nums[i]);
    }
    printf("\nThe third maximum element is: %d", thirdMax(nums, n));
}