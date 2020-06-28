#include <stdio.h>
int main() 
{
    int i, j, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= 2 * (n - i + 1); j++) {
            if (j % 2 == 0 && j < 2 * (n - i + 1)) {
                printf(" ");
            } else if (j == 2 * (n - i + 1)) {
                printf("\n");
            } else {
                printf("%d", n - i + 1 - j / 2);
            }
        }
    }
    return 0;
}