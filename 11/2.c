#include <stdio.h>
int main()
{
    int arr[33] = {0};
    int bits[33];
    // char input[500];
    char input;
    char output[33];
    int i, j;
    int counter = 0;

    while (scanf("%c", &input) != EOF) {
        if (input == '\n')
            break;
        counter++;
        arr[counter % 32] += input; //第i位存入arr[i%32]中
    }

    for (j = 0; j < 32; j++) {
        bits[j] = arr[31 - j] ^ (arr[j] << 1);
    }

    for (int j = 0; j < 32; j++) {
        output[j + 1] = (bits[j] % 85 + 34); // output感觉就没用啊，不如直接输出
        printf("%c", output[j + 1]);
    }
    printf("\n");
    return 0;
}