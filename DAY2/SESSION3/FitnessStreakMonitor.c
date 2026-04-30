#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of days: ");
    scanf("%d", &n);
    
    int steps[n];
    printf("Enter the steps taken each day: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &steps[i]);
    }
    
    int countStreak = 0, maxStreak = 0;
    for(int i = 0; i < n; i++) {
        if(steps[i] >= 10000) {
            countStreak++;
            if(countStreak > maxStreak) {
                maxStreak = countStreak;
            }
        } else {
            countStreak = 0;
        }
    }
    
    printf("Longest fitness streak (days with at least 10,000 steps): %d\n", maxStreak);
    
    return 0;
}