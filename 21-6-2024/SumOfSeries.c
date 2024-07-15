/*
Name: Anvesh Malkhede
Reg no.: 22030112
Dept: Information Technology
Batch 7
*/

// sum= 1 + x/1 + x^2/2 + x^3/3 + ... + x^n/n

#include <stdio.h>
#include <math.h>

int main(void) {
    int x, n;
    double sum = 1.0; 
    double term;  
    
    printf("Enter the value of x: ");
    scanf("%d", &x);
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        term = pow(x, i) / i;
        sum += term;
    }
    printf("The sum of the series is: %.6f\n", sum);
    
    return (0);
}