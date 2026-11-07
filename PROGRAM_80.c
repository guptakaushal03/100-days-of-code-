// Multiply two matrices.
#include <stdio.h>

int main() {
    int n, m, p;
    int i, j, k;

    printf("Rows of Matrix 1: ");
    scanf("%d", &n);

    printf("Columns of Matrix 1: ");
    scanf("%d", &m);

    printf("Columns of Matrix 2: ");
    scanf("%d", &p);

    int arr[n][m];
    int arr1[m][p];
    int arr2[n][p];

    printf("\nMatrix 1:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMatrix 2:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < p; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < p; j++) {
            arr2[i][j] = 0;

            for(k = 0; k < m; k++) {
                arr2[i][j] += arr[i][k] * arr1[k][j];
            }
        }
    }

    printf("\nMultiplication Matrix:\n");

    for(i = 0; i < n; i++) {
        for(j = 0; j < p; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
