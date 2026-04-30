#include<stdio.h>
int main(){
    int length;
    printf("Enter the length of the string: ");
    scanf("%d", &length);
    char str[length+1];
    printf("Enter the string: ");
    scanf("%s", str);
    int count[256] = {0};
    for(int i=0; str[i]; i++){
        count[(int)str[i]]++;
}