
/*
Name: Anvesh Malkhede
Reg no.: 22030112
Dept: Information Technology
Batch 7
*/

/* 
Accept a number and count number of digits entered by user

Accept a number and print sum of digits of any  number

Accept a number and find factorial of any number

*/
#include <stdio.h>

int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}


int sumOfDigits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}


long long factorial(int number) {
    if (number == 0) return 1;
    long long fact = 1;
    for (int i = 1; i <= number; i++) {
        fact *= i;
    }
    return fact;
}

int main(void) {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int digits = countDigits(number);
    printf("Number of digits: %d\n", digits);

    int sum = sumOfDigits(number);
    printf("Sum of digits: %d\n", sum);

    long long fact = factorial(number);
    printf("Factorial: %lld\n", fact);
    
    return (0);
}

/* output
Enter a number: 10
Number of digits: 2
Sum of digits: 1
Factorial: 3628800

*/