#include <stdio.h>

//计算阶乘
long double factorial(int n)
{
    long double result = 1;
    int i;
    for (i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
//计算组合数
long long C(int n, int m)
{
    long long result;
    result = (long long)(factorial(n) / (factorial(m) * factorial(n - m)));
    return result;
}

int main()
{
    int n;
    scanf("%d", &n);
    long long i = 0;
    int x;
    int y;
    // int m=1;这俩参数压根没用到
    // int b=1;
    for (x = 0; x <= n / 2; x++) {
        for (y = 0; y <= n / 3; y++) {
            if (x * 2 + y * 3 == n) {
                // i++;没有考虑先后顺序，因此要加上组合数
                i += C(x + y, x);
            }
        }
    }
    printf("%lld", i);
    return 0;
}