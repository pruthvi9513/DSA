#include <stdio.h>

int main() {
    int a[3][3], b[3][3], result[3][3];
    int i, j, k;

    // Input elements for the first matrix
    printf("Enter elements of the first matrix (3x3):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("Enter elements of the second matrix (3x3):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize elements of the result matrix to 0
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            result[i][j] = 0;
        }
    }

    // Multiply the two matrices
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 3; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Display the result
    printf("Product of the entered matrices:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

