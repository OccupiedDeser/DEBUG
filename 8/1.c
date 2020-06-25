#include <stdio.h>
#include <string.h>
int main() {
    int n;
    int maxlen = 0;
    char max[101];
    scanf("%d\n", &n);
    char names[n][101];

    for (int i = 0; i < n; i++) {
        int z = 0;
        while (scanf("%c", &names[i][z]) != EOF && names[i][z] != '\n') {
            z++;
        }
        names[i][z] = '\0';
        if (z > maxlen) {
            maxlen = z;
            strcpy(max, names[i]);
        }
    }
    printf("%s", max);
    return 0;
}
