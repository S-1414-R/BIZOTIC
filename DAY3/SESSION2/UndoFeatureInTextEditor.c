#include<stdio.h>
#include<string.h>
int main(){
    char text[1000];
    char undoStack[100][1000];
    int top = -1; // Stack pointer
    printf("Enter text (type 'UNDO' to undo last change, 'EXIT' to quit):\n");
    while(1){
        char input[1000];
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0;
        if(strcmp(input, "EXIT") == 0){
            break;
        } else if(strcmp(input, "UNDO") == 0){
            if(top >= 0){
                strcpy(text, undoStack[top--]); 
                printf("After UNDO: %s\n", text);
            } else {
                printf("Nothing to undo.\n");
            }
        } else {
            if(top < 99){ 
                strcpy(undoStack[++top], text);  
                strcpy(text, input); 
                printf("Current Text: %s\n", text);
            } else {
                printf("Undo stack is full. Cannot save more states.\n");
            }
        }
    }
    return 0;
}