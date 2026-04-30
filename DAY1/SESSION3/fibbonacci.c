#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int a = 0, b = 1, next;
    printf("Fibonacci Series: ");
    for(int i = 0; i < n; i++){
        if(i <= 1){
            next = i;
        } else {
            next = a + b;
            a = b;
            b = next;
        }
        printf("%d ", next);
    }
    return 0;
}
