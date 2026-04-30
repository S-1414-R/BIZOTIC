#include<stdio.h>
int main(){
    int n;
    printf("Enter the num: ");
    scanf("%d", &n);
    char operation[n][20];
    for(int i=0; i<n; i++){
        printf("Enter the operation: ");
        scanf("%s", operation[i]);
    }
    int stack[n];
    int top = -1;
    for(int i=0; i<n; i++){
        if(strcmp(operation[i],"+")==0){
            int val=stack[top]+stack[top-1];
            stack[top++]=val;
        }
        else if(strcmp(operation[i],"D")==0){
            int val=2*stack[top];
            stack[top++]=val;       
        }
        else if(strcmp(operation[i],"C")==0){
            top--;
        }
        else{
            stack[++top]=operation[i]-'0';
        }
}