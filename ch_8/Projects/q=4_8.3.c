#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int a[rows][cols];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d]= ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nBoundary elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                printf("%d ", a[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    int sum = 0;

    for (int j = 0; j < cols; j++) {
        sum += a[0][j];
    }

    for (int i = 1; i < rows - 1; i++) {
        sum += a[i][cols - 1];
    }

    if (rows > 1) {
        for (int j = cols - 1; j >= 0; j--) {
            sum += a[rows - 1][j];
        }
    }

    for (int i = rows - 2; i > 0; i--) {
        sum += a[i][0];
    }

    printf("\nSum of boundary elements: %d\n", sum);

    return 0;
}