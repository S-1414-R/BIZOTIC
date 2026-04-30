/*#include<stdio.h>
int main(){
    int m, n;       
    printf("Enter two numbers: ");
    scanf("%d %d", &m, &n);
    int matrix[m][n];
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Reversed matrix:\n");
    for(int i = m - 1; i >= 0; i--){
        for(int j = n - 1; j >= 0; j--){
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
#include <stdio.h>

void displayMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int r, c;


    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int matrix[r][c];
    int transpose[c][r];
    int reversed[c][r];

    
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    int totalElements = r * c;
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            // Map the last elements of 'transpose' to the first of 'reversed'
            int currentPos = i * r + j;
            int reversePos = (totalElements - 1) - currentPos;
            reversed[i][j] = transpose[reversePos / r][reversePos % r];
        }
    }
    printf("\nOriginal Matrix:\n");
    displayMatrix(r, c, matrix);

    printf("\nTransposed Matrix:\n");
    displayMatrix(c, r, transpose);

    printf("\nReversed Transposed Matrix:\n");
    displayMatrix(c, r, reversed);

    return 0;
}
