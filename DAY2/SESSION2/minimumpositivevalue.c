#include<stdio.h>
int main()
{   int n;
    printf("Enter the number of elements in the array: ");      
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int minPositive = -1; 
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) { 
            if(minPositive == -1 || arr[i] < minPositive) {
                minPositive = arr[i];
            }
        }
    }
    if(minPositive != -1) {
        printf("The minimum positive value in the array is: %d\n", minPositive);
    } else {
        printf("No positive value found in the array.\n");
    }
    return 0;
}