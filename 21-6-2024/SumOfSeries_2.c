/*
Name: Anvesh Malkhede
Reg no.: 22030112
Dept: Information Technology
Batch 7
*/

// sum= 1 + x/1! + x^2/2! + x^3/3! +... + x^n/n!

#include <stdio.h>

int main() {
    int n, i, j;
    double x, sum = 1.0, term, factorial;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        term = 1.0;
        factorial = 1.0;

        for (j = 1; j <= i; ++j) {
            term *= x;
            factorial *= j;
        }

        sum += term / factorial;
    }

    printf("Sum of the series is: %.6f\n", sum);

    return 0;
}
