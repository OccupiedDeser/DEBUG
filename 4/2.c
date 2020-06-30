#include <stdio.h>
void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int main()
{
    int n = 10;
    int numbers[n];
    int i;
    int j;
    // ������������ￄ1�7
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = n - 1; j > i; j--) {
            if (numbers[j] > numbers[i]) {
                swap(&numbers[j], &numbers[i]);
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d", numbers[i]);
        if (i != n - 1) {
            printf(" ");
        }
    }
    return 0;
}