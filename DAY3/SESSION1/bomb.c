#include<stdio.h>
int main(){
    int n,k;
    printf("Enter the n and k");
    scanf("%d %d", &n, &k);
    int code[n], result[n];
    printf("Enter the code: ");
    for(int i=0; i<n; i++){
        scanf("%d", &code[i]);
    }
    if (k == 0) {
        for(int i=0; i<n; i++){
            result[i] = 0;
        }
    }
    if (k>0){
        for(int i=0; i<n; i++){
            int sum = 0;
            for(int j=1; j<=k; j++){
                sum += code[(i+j)%n];
            }
            result[i] = sum;
        }
    }
    else if (k<0){
        k=-k;
        int temp[2*n];
        for(int i=0; i<2*n; i++){
            temp[i] = code[i%n];
        }
        int prefixSum[2*n];
        prefixSum[0] = temp[0];
        for(int i=1; i<2*n; i++){
            prefixSum[i] = prefixSum[i-1] + temp[i];
        }
        for(int i=0; i<n; i++){
            int sum = prefixSum[i+n-1] - prefixSum[i+n-k-1];
            result[i] = sum;
        }
    }
    printf("Result: ");
    for(int i=0; i<n; i++){
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}   
    

