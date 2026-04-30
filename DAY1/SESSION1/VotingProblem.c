#include<stdio.h>
int main(){
    int NumberofVotes;
    int N=5;
    int map[6]={0};
    int valid=0, invalid=0, vote=0;;
    printf("Enter the number of votes: ");
    scanf("%d",&NumberofVotes);

    for(int i=0;i<NumberofVotes;i++){
        scanf("%d",&vote);
        if(vote>=1 && vote<=N){
            map[vote]++;
            valid++;
        }
        else{
            invalid++;
        }
    }
    int max=map[0];
    for(int i=1;i<=N;i++){
        if(map[i]>max){
            max=map[i];
        }
    }
    printf("Valid votes: %d\n", valid);
    printf("Invalid votes: %d\n", invalid);
    printf("Maximum votes received by a candidate: %d\n", max);
}