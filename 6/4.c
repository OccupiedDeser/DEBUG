#include <stdio.h>
#include <string.h>
int main() {
    char before[100];
    scanf("%s", before);
    char calculate[2500][4]; //至多2500
    int i = 0;
    int count = 0;
    while (scanf("%s", calculate[i]) != EOF) {
        count++;
        i++;
    }
    int result = 0;
    for (i = 0; i < 3; i++) {
        if (before[i] == 'r')
            result += 4;
        if (before[i] == 'w')
            result += 2;
        if (before[i] == 'x')
            result += 1;
    }
    //计算后的结果
    for (i = 0; i < count; i++) {
        if (calculate[i][0] == '+') {
            if (calculate[i][1] == 'r' && result / 4 == 0)
                result += 4;
            if (calculate[i][1] == 'w' && (result / 2) % 2 == 0)
                result += 2;
            if (calculate[i][1] == 'x' && result % 2 == 0)
                result += 1;
        } else if (calculate[i][0] == '-') {
            if (calculate[i][1] == 'r' && result / 4)
                result -= 4;
            if (calculate[i][1] == 'w' && (result / 2) % 2)
                result -= 2;
            if (calculate[i][1] == 'x' && result % 2)
                result -= 1;
        }
    }

    printf("%d", result);
    return 0;
}