#include <math.h>
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n = 10;
    int numbers[10];
    int i, j;

    // input numbers
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1; j++) {
            if (numbers[j] < numbers[j + 1]) {
                swap(&numbers[j], &numbers[j + 1]);
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d", numbers[i]);
        if (i != 9) {
            printf(" ");
        }
    }
    return 0;
}
