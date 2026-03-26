#include <stdio.h>

#define MAX 10

void matrixAddition(int r, int c, int A[MAX][MAX], int B[MAX][MAX]) {
    int sum[MAX][MAX];
    printf("\nResult of Matrix Addition:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = A[i][j] + B[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}

void findSaddlePoint(int r, int c, int mat[MAX][MAX]) {
    for (int i = 0; i < r; i++) {
        int min_row = mat[i][0], col_ind = 0;
        for (int j = 1; j < c; j++) {
            if (min_row > mat[i][j]) {
                min_row = mat[i][j];
                col_ind = j;
            }
        }
        int k;
        for (k = 0; k < r; k++) {
            if (min_row < mat[k][col_ind])
                break;
        }

        if (k == r) {
            printf("\nSaddle Point found: %d", min_row);
            return;
        }
    }
    printf("\nNo Saddle Point found.");
}

int main() {
    int r, c, A[MAX][MAX], B[MAX][MAX];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of Matrix A:\n");
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            scanf("%d", &A[i][j]);
    printf("Enter elements of Matrix B:\n");
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            scanf("%d", &B[i][j]);

    matrixAddition(r, c, A, B);
    findSaddlePoint(r, c, A);

    return 0;
}