#include <stdio.h>
int main() {
    int y, m, d;
    scanf("%d-%d-%d", &y, &m, &d);
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        if (d <= 31) {
            printf("YES");
        } else {
            printf("NO");
        }
    } else if (m != 2) {
        if (d <= 30) {
            printf("YES");
        } else {
            printf("NO");
        }
    } else {
        if (y % 100 != 0 && y % 4 == 0 || y % 400 == 0) {
            if (d <= 29) {
                printf("YES");
            } else {
                printf("NO");
            }
        } else {
            if (d <= 28) {
                printf("YES");
            } else {
                printf("NO");
            }
        }
    }
    return 0;
}