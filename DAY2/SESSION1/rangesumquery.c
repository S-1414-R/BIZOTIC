#include<stdio.h>
int main()
{   int n, q;
    printf("Enter the number of elements in the array: ");      
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of queries: ");
    scanf("%d", &q);
    while(q--) {
        int l, r;
        printf("Enter the left and right indices for the query: ");
        scanf("%d %d", &l, &r);
        int sum = 0;
        for(int i = l; i <= r; i++) {
            sum += arr[i];
        }
        printf("Sum of elements from index %d to %d: %d\n", l, r, sum);
    }
    return 0;
}