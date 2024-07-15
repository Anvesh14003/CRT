#include <stdio.h>

int main(void) {
    int number, firstDigit, lastDigit, sum;

    printf("Enter a 5-digit number: ");
    scanf("%d", &number);

    lastDigit = number % 10;

    firstDigit = number / 10000;

    sum = firstDigit + lastDigit;

    printf("The sum of the first and last digits is: %d\n", sum);
    
    return (0);
}
