#include<stdio.h>
int minEatingValue(int bunches[], int N, int h) {
    int left = 1, right = 0;
    for(int i = 1; i < N; i++) {
        if(bunches[i] > right) {
            right = bunches[i];
        }
    }
    int answer = right;
    while(left < right) {
        int mid = left + (right - left) / 2;
        int totalhours = 0;
        for(int i = 0; i < N; i++) {
            totalhours += (bunches[i] + mid - 1) / mid;
        }
        if(totalhours <= h) {
            answer = mid;
            right=mid-1;
        } else {
            left = mid + 1;
        }
    }
    return left;
}
int main(){
    int bunches[]={3,6,7,11};
    int h=8;
    int N=sizeof(bunches)/sizeof(bunches[0]);
    printf("%d",minEatingValue(bunches,N,h));
    return 0;   
}