#include <math.h>
#include <stdio.h>
#define EPSILON 1e-7

double bisection(int p, int q);
double f(int p, int q, double x);
int main()
{
    int p;
    int q;
    scanf("%d%d", &p, &q);
    printf("%.4f\n", bisection(p, q));
    return 0;
}

double bisection(int p, int q)
{
    double a;
    double b;
    double m;
    a = -20.0;
    b = 20.0;
    m = (a + b) / 2;
    while (fabs(f(p, q, m)) >= EPSILON) {
        if (f(p, q, m) * f(p, q, b) > 0) {
            b = m;
            m = (a + b) / 2;
        } else {
            a = m;
            m = (a + b) / 2;
        }
    }
    return m;
}

double f(int p, int q, double x)
{
	return p * x + q; 
}