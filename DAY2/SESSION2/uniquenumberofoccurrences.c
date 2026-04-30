#include<stdio.h>
#include<stdbool.h>
bool uniqueOccurrences(int arr[], int n) {
    int count[1000] = {0}; 
    for(int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    bool seen[1000] = {false}; 
    for(int i = 0; i < 1000; i++) {
        if(count[i] > 0) {
            if(seen[count[i]]) {
                return false; 
            }
            seen[count[i]] = true;
        }
    }
    return true;
}
int main()
{
    int arr[]={1,2,2,1,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(uniqueOccurrences(arr, n)) {
        printf("All occurrences are unique.\n");
    } else {
        printf("There are duplicate occurrences.\n");
    }
    return 0;
}
        