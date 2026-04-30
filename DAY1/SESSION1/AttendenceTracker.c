#include<stdio.h>
int main(){
    int n;
    printf("enter the number of students in the class\n");
    scanf("%d",&n);
    char name[20];
    int attended, total;
    float percentage;
    for(int i=0;i<n;i++){
        printf("enter the name of the student\n");
        scanf("%s",name);
        printf("enter the number of classes attended and total classes\n");
        scanf("%d%d",&attended,&total);
        percentage = (attended*100.0)/total;
        printf("%s has attended %.2f%% of classes\n",name,percentage);
        if (percentage<75){
            printf("%s is not eligible for the exam\n",name);
        }   
        else{
            printf("%s is eligible for the exam\n",name);
        }   
    }
    return 0;
}   