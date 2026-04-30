#include<stdio.h>
int main(){
    int m, n;
    printf("Enter two numbers: ");
    scanf("%d %d", &m, &n);             
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            printf("%d  ", i * j);   
        }
        printf("\n");
    }
    return 0;
}
