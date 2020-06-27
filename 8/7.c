#include <stdio.h>
#include <string.h>
int main() 
{
    int n;
    int i, j;
    scanf("%d\n", &n);
    char names[n][105];
    char temp[105];

    for (i = 0; i < n; i++) {
        for (j = 0; j <= 101; j++) {
            scanf("%c", &names[i][j]);
            if (names[i][j] == '\n') {
                names[i][j] = '\0';
                break;
            }
        }
    }
    int max, maxlen, namelen;
    max = maxlen = 0;
    for (i = 0; i < n; i++) {
        // for (j = 0; j < n - 1 - i; j++) {
        //     if (strlen(names[j]) < strlen(names[j + 1])) {
        //         strcpy(temp, names[j]);
        //         strcpy(names[j], names[j + 1]);
        //         strcpy(names[j + 1], temp);
        //     }
        // }
        namelen = strlen(names[i]);
        if (namelen > maxlen) {
            max = i;
            maxlen = namelen;
        }
    }

    printf("%s", names[max]);
    return 0;
}