#include <stdio.h>
typedef struct phonelist {
    char name[100];
    char phone[20];
} phonebook;
int binarySearch(phonebook p[], int n, char key[]) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + high / 2;
        int compare = strcmp(p[mid].name, key);
        if (compare == 0) {
            return mid;
        } else if (compare < 0) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }

    }
    
    return -1;
}
int main() {
    int n, q;
    printf("Enter the number of people: ");
    scanf("%d", &n);
    phonebook p[n];
    for (int i = 0; i < n; i++) {
        printf("Enter name and phone number %d: ", i+1);
        scanf("%s %s", p[i].name, p[i].phone);
    }
    printf("Enter the query name to search: ");
    scanf("%d",&q);
    while(q--){
        char searchName[100];
        printf("Enter the name to search: ");
        scanf("%s", searchName);
        int index= binarySearch(p, n, searchName);
        if (index != -1) {
            printf("Found: %s is %s\n", p[index].name, p[index].phone);
        } else {
            printf("Not Found: %s is not in the directory.\n", searchName);
        }
    }
}