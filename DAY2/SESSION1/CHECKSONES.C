#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array (0s and 1s only): ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int countOnes = 0, maxcount = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 1) {
            countOnes++;
            if(countOnes > maxcount) {
                maxcount = countOnes;
            }
        } else {
            countOnes = 0;
        }
    }
    
    printf("Maximum number of consecutive 1s in the array: %d\n", maxcount);
    
    return 0;
}