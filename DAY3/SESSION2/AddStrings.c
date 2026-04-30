#include<stdio.h>
int main(){
    char num1[1000], num2[1000];
    char result[1001]; // +1 for null terminator
    printf("Enter first number:\n");
    scanf("%s", num1);
    printf("Enter second number:\n");   
    scanf("%s", num2);
    int len1 = 0, len2 = 0;
    while(num1[len1] != '\0') len1++;
    while(num2[len2] != '\0') len2++;
    int carry = 0, i = len1 - 1, j = len2 - 1, k = 0;
    while(i >= 0 || j >= 0 || carry) {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        result[k++] = (sum % 10) + '0';
        carry = sum / 10;
        i--;
        j--;        
    }
    result[k] = '\0';
    for(int p=k-1; p>=0; p--){
        printf("%c", result[p]);
    }
    return 0;   
}