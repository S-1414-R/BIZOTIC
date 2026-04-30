#include<stdio.h>
#include<string.h>
int findUniqueSubstring(char s[]){
    int n = strlen(s);
    int count = 0;
    if(n<3){
        return 0;
    }
    for(int i=0; i<=n-3; i++){
        char a=s[i];
        char b=s[i+1];
        char c=s[i+2];
        if(a!=b && b!=c && a!=c){
            count++;
        }
    }
    return count;
}
int main(){
    char s[1000];
    printf("Enter a string:\n ");
    scanf("%s", s);
    printf("%d", findUniqueSubstring(s));
    return 0;   

}