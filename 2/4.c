#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int matrix_a[10][10];
    int matrix_b[10][10];
    int m;
    int n;
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix_a[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix_b[i][j]);
        }
    }

    int* m3 = (int*)malloc(sizeof(int) * m * m);
    memset(m3, 0, sizeof(int) * m * m);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < n; k++) {
                m3[i * m + j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", m3[i * m + j]);
            if (j != m - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    free(m3);

    return 0;
}