#include <stdio.h>

int main() {
    int N; // total number of steps
    scanf("%d", &N);
    int step[51]; // step[i] records methods to reach the ist step
    step[0] = 0;
    step[1] = 0;
    step[2] = 1;
    step[3] = 1;
    for (int i = 4; i <= N; i++) {
        step[i] = step[i - 2] + step[i - 3];
    }
    printf("%d", step[N]);
    return 0;
}