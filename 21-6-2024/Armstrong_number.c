#include <stdio.h>

int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int isArmstrong(int number) {
    int numDigits = countDigits(number);
    int sum = 0;
    int temp = number;
    while (temp != 0) {
        int digit = temp % 10;
        sum += power(digit, numDigits);
        temp /= 10;
    }
    return (sum == number);
}

int main(void) {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return (0);
}
