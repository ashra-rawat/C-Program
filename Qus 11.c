#include <stdio.h>

void multiplyMatrices(int A[10][10], int B[10][10], int C[10][10], int m, int n, int p)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
}
void printMatrix(int matrix[10][10], int row, int col)
{
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}
int main()
{
    int A[10][10], B[10][10], C[10][10];
    int m, n, p;
    printf("Enter number of rows and columns for Matrix A: ");
    scanf("%d %d", &m, &n);
    printf("\nEnter number of columns for Matrix B: ");
    scanf("%d", &p);

   // Input Matrix A
    printf("\nEnter elements of Matrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
    }
    // Input Matrix B
    printf("\nEnter elements of Matrix B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++)
            scanf("%d", &B[i][j]);
    }

    // Multiply Matrices A and B
    multiplyMatrices(A, B, C, m, n, p);

    // Output the result Matrix C
    printf("\nResultant Matrix C after multiplication is:\n");
    printMatrix(C, m, p);

    return 0;
}
